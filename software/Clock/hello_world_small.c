#include "sys/alt_stdio.h"
#include "system.h"
#include "priv/alt_legacy_irq.h"
#include "sys/alt_irq.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
//Timer
volatile unsigned char* STATUS;
volatile unsigned char* CONTROL;

volatile unsigned char* H_1;
volatile unsigned char* H_2;
volatile unsigned char* M_1;
volatile unsigned char* M_2;
volatile unsigned char* S_1;
volatile unsigned char* S_2;

volatile int counterS = 0;
volatile int counterS_1 = 0;
volatile int counterS_2 = 0;
volatile int counterM_1 = 0;
volatile int counterM_2 = 0;
volatile int counterH_1 = 0;
volatile int counterH_2 = 0;

volatile int alarmS = 0;
volatile int alarmS_1 = 0;
volatile int alarmS_2 = 0;
volatile int alarmM_1 = 0;
volatile int alarmM_2 = 0;
volatile int alarmH_1 = 0;
volatile int alarmH_2 = 0;


volatile int set_time_mode = 0;  // Variable for changing the current time
volatile int set_alarm_mode = 0; // Variable for changing the current alarm

//Set
volatile unsigned char* MASK;
volatile unsigned char* EDGE;
volatile unsigned char* SET;

int not(int boolean){
 return 1 - boolean;
}
void asignTime(){
 // Logic to use BCD numbers
 counterS_2 = ((counterS)         % 10);
 counterS_1 = ((counterS / 10)    % 6);
 counterM_2 = ((counterS / 60)    % 10);
 counterM_1 = ((counterS / 600)   % 6);
 counterH_2 = ((counterS / 3600)  % 10);
 counterH_1 = ((counterS / 36000) % 3);
 // Setting output registers values
 *H_1 = counterH_1;
 *H_2 = counterH_2;
 *M_1 = counterM_1;
 *M_2 = counterM_2;
 *S_1 = counterS_1;
 *S_2 = counterS_2;
}


/*
 * This function sets alarm values according to counterS variable
*/
void asignAlarm(){
 // Logic to use BCD numbers
 alarmS_2 = ((alarmS)         % 10);
 alarmS_1 = ((alarmS / 10)    % 6);
 alarmM_2 = ((alarmS / 60)    % 10);
 alarmM_1 = ((alarmS / 600)   % 6);
 alarmH_2 = ((alarmS / 3600)  % 10);
 alarmH_1 = ((alarmS / 36000) % 3);
 // Setting output registers values
 *H_1 = alarmH_1;
 *H_2 = alarmH_2;
 *M_1 = alarmM_1;
 *M_2 = alarmM_2;
 *S_1 = alarmS_1;
 *S_2 = alarmS_2;
}

/*
 * This function is called by timer interrupt every 1us
*/
void countUp (void* context){
 *STATUS = 0x0; //Resets the interrupt
 // If we are not in set time or alarm mode
 alt_putstr("Trying to count \n");
 if(not(set_time_mode) && not(set_alarm_mode)){
  alt_putstr("CountUp\n");
  // Increment seconds
  counterS++;
  // If counterS reaches a day in seconds (86400), reset counter
  if (counterS > 86400){
   counterS = 0;
  }
  // Set time values
  asignTime();
  // If counterS are equal to alarmS
  if(counterS == alarmS){
   // Print alarm sound
   alt_putstr("Beep Beep! Beep Beep!\n");
  }
 }
}

void buttonInterrupt (void* context){
 //volatile int* edgeCapturePtr = (volatile int*) context;
 //*edgeCapturePtr = *EDGE;
 // If set register has the binary value 01010, which means time mode, toggle set_time_mode
 alt_putstr("Button Interrupt\n");
 if(*(SET) == 0x10){
  //set_time_mode = not(set_time_mode);
  set_time_mode=1;
  alt_putstr("Time mode: On \n");
 }
 else if(*(SET) == 0x09){
  set_time_mode=0;
  alt_putstr("Time mode: Off \n");
 }
 // If set register has the binary value 01000, which means alarm mode, toggle set_alarm_mode
 else if(*(SET) == 0x08){
  //set_alarm_mode = not(set_alarm_mode);
  set_alarm_mode=1;
  alt_putstr("Alarm mode: On \n");
 }
 else if(*(SET) == 0x07){
  //set_alarm_mode = not(set_alarm_mode);
  set_alarm_mode =0;
  alt_putstr("Alarm mode: Off \n");
 }

 // If we are in time mode
 if(set_time_mode){
  /* If set register has the binary value 00001, which means increment seconds,
   * increment counterS by 1
   */
  if(*(SET) == 0x1){
   counterS++;
   alt_putstr("Time increase: 1s \n");
  }
  /* If set register has the binary value 00010, which means increment minutes,
   * increment counterS by 60
   */
  else if(*(SET) == 0x2){
   counterS += 60;
   alt_putstr("Time increase: 1min \n");
  }
  /* If set register has the binary value 00100, which means increment hours,
   * increment counterS by 3600
   */
  else if(*(SET) == 0x4){
   counterS += 3600;
   alt_putstr("Time increase:1h \n");
  }
  // Update time values
  asignTime();
 }
 // If we are in alarm mode. Here we do the same as previous if, but with alarmS counter
 if(set_alarm_mode){
  if(*(SET) == 0x1){
   alarmS++;
   alt_putstr("Alarm increase: 1s \n");
  }
  else if(*(SET) == 0x2){
   alarmS += 60;
   alt_putstr("Alarm increase: 1min \n");
  }
  else if(*(SET) == 0x4){
   alarmS += 3600;
   alt_putstr("Alarm increase: 1h \n");
  }
  asignAlarm();
 }
 //*SET = 0x0;
}

int main(){
 volatile int tt = 0;
 volatile int captureEdge;
 STATUS  = (unsigned char*)0x9020;
 CONTROL  = (unsigned char*)0x9024;
 S_2  = (unsigned char*)0x9040;
 S_1  = (unsigned char*)0x9050;
 M_2  = (unsigned char*)0x9060;
 M_1  = (unsigned char*)0x9070;
 H_2  = (unsigned char*)0x9080;
 H_1  = (unsigned char*)0x9090;
 SET = (unsigned char*)0x30a0;
 MASK = (unsigned char*)0x90a8;
 EDGE = (unsigned char*)0x90ac;

 //start counting
 *CONTROL = 0x0007; //Sets the start, cont and ito bits to 1

 *MASK = 0xf;
 *EDGE = 0x0;

 //sets the function to execute in case of an interruption
 alt_irq_register(BUTTON_IRQ, (void*) &captureEdge, buttonInterrupt);
 alt_irq_register(TIMER_IRQ, (void*) &captureEdge, countUp);

 /* Event loop never exits. */
 while (1){
 }

 return 0;
}

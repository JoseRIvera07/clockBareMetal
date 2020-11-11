/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'sistema'
 * SOPC Builder design path: ../../sistema.sopcinfo
 *
 * Generated: Tue Nov 10 13:56:06 CST 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_BUTTON altera_avalon_pio
#define BUTTON_BASE 0x90c0
#define BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_CAPTURE 1
#define BUTTON_DATA_WIDTH 2
#define BUTTON_DO_TEST_BENCH_WIRING 0
#define BUTTON_DRIVEN_SIM_VALUE 0
#define BUTTON_EDGE_TYPE "ANY"
#define BUTTON_FREQ 50000000
#define BUTTON_HAS_IN 1
#define BUTTON_HAS_OUT 0
#define BUTTON_HAS_TRI 0
#define BUTTON_IRQ 2
#define BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_IRQ_TYPE "LEVEL"
#define BUTTON_NAME "/dev/BUTTON"
#define BUTTON_RESET_VALUE 0
#define BUTTON_SPAN 16
#define BUTTON_TYPE "altera_avalon_pio"


/*
 * BUZZER configuration
 *
 */

#define ALT_MODULE_CLASS_BUZZER altera_avalon_pio
#define BUZZER_BASE 0x90b0
#define BUZZER_BIT_CLEARING_EDGE_REGISTER 0
#define BUZZER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUZZER_CAPTURE 0
#define BUZZER_DATA_WIDTH 10
#define BUZZER_DO_TEST_BENCH_WIRING 0
#define BUZZER_DRIVEN_SIM_VALUE 0
#define BUZZER_EDGE_TYPE "NONE"
#define BUZZER_FREQ 50000000
#define BUZZER_HAS_IN 0
#define BUZZER_HAS_OUT 1
#define BUZZER_HAS_TRI 0
#define BUZZER_IRQ -1
#define BUZZER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUZZER_IRQ_TYPE "NONE"
#define BUZZER_NAME "/dev/BUZZER"
#define BUZZER_RESET_VALUE 0
#define BUZZER_SPAN 16
#define BUZZER_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x4000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "sistema_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 15000
#define RAM_SPAN 15000
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * SVSD0 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD0 altera_avalon_pio
#define SVSD0_BASE 0x9090
#define SVSD0_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD0_CAPTURE 0
#define SVSD0_DATA_WIDTH 4
#define SVSD0_DO_TEST_BENCH_WIRING 0
#define SVSD0_DRIVEN_SIM_VALUE 0
#define SVSD0_EDGE_TYPE "NONE"
#define SVSD0_FREQ 50000000
#define SVSD0_HAS_IN 0
#define SVSD0_HAS_OUT 1
#define SVSD0_HAS_TRI 0
#define SVSD0_IRQ -1
#define SVSD0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD0_IRQ_TYPE "NONE"
#define SVSD0_NAME "/dev/SVSD0"
#define SVSD0_RESET_VALUE 0
#define SVSD0_SPAN 16
#define SVSD0_TYPE "altera_avalon_pio"


/*
 * SVSD1 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD1 altera_avalon_pio
#define SVSD1_BASE 0x9080
#define SVSD1_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD1_CAPTURE 0
#define SVSD1_DATA_WIDTH 4
#define SVSD1_DO_TEST_BENCH_WIRING 0
#define SVSD1_DRIVEN_SIM_VALUE 0
#define SVSD1_EDGE_TYPE "NONE"
#define SVSD1_FREQ 50000000
#define SVSD1_HAS_IN 0
#define SVSD1_HAS_OUT 1
#define SVSD1_HAS_TRI 0
#define SVSD1_IRQ -1
#define SVSD1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD1_IRQ_TYPE "NONE"
#define SVSD1_NAME "/dev/SVSD1"
#define SVSD1_RESET_VALUE 0
#define SVSD1_SPAN 16
#define SVSD1_TYPE "altera_avalon_pio"


/*
 * SVSD2 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD2 altera_avalon_pio
#define SVSD2_BASE 0x9070
#define SVSD2_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD2_CAPTURE 0
#define SVSD2_DATA_WIDTH 4
#define SVSD2_DO_TEST_BENCH_WIRING 0
#define SVSD2_DRIVEN_SIM_VALUE 0
#define SVSD2_EDGE_TYPE "NONE"
#define SVSD2_FREQ 50000000
#define SVSD2_HAS_IN 0
#define SVSD2_HAS_OUT 1
#define SVSD2_HAS_TRI 0
#define SVSD2_IRQ -1
#define SVSD2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD2_IRQ_TYPE "NONE"
#define SVSD2_NAME "/dev/SVSD2"
#define SVSD2_RESET_VALUE 0
#define SVSD2_SPAN 16
#define SVSD2_TYPE "altera_avalon_pio"


/*
 * SVSD3 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD3 altera_avalon_pio
#define SVSD3_BASE 0x9060
#define SVSD3_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD3_CAPTURE 0
#define SVSD3_DATA_WIDTH 4
#define SVSD3_DO_TEST_BENCH_WIRING 0
#define SVSD3_DRIVEN_SIM_VALUE 0
#define SVSD3_EDGE_TYPE "NONE"
#define SVSD3_FREQ 50000000
#define SVSD3_HAS_IN 0
#define SVSD3_HAS_OUT 1
#define SVSD3_HAS_TRI 0
#define SVSD3_IRQ -1
#define SVSD3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD3_IRQ_TYPE "NONE"
#define SVSD3_NAME "/dev/SVSD3"
#define SVSD3_RESET_VALUE 0
#define SVSD3_SPAN 16
#define SVSD3_TYPE "altera_avalon_pio"


/*
 * SVSD4 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD4 altera_avalon_pio
#define SVSD4_BASE 0x9050
#define SVSD4_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD4_CAPTURE 0
#define SVSD4_DATA_WIDTH 4
#define SVSD4_DO_TEST_BENCH_WIRING 0
#define SVSD4_DRIVEN_SIM_VALUE 0
#define SVSD4_EDGE_TYPE "NONE"
#define SVSD4_FREQ 50000000
#define SVSD4_HAS_IN 0
#define SVSD4_HAS_OUT 1
#define SVSD4_HAS_TRI 0
#define SVSD4_IRQ -1
#define SVSD4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD4_IRQ_TYPE "NONE"
#define SVSD4_NAME "/dev/SVSD4"
#define SVSD4_RESET_VALUE 0
#define SVSD4_SPAN 16
#define SVSD4_TYPE "altera_avalon_pio"


/*
 * SVSD5 configuration
 *
 */

#define ALT_MODULE_CLASS_SVSD5 altera_avalon_pio
#define SVSD5_BASE 0x9040
#define SVSD5_BIT_CLEARING_EDGE_REGISTER 0
#define SVSD5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SVSD5_CAPTURE 0
#define SVSD5_DATA_WIDTH 4
#define SVSD5_DO_TEST_BENCH_WIRING 0
#define SVSD5_DRIVEN_SIM_VALUE 0
#define SVSD5_EDGE_TYPE "NONE"
#define SVSD5_FREQ 50000000
#define SVSD5_HAS_IN 0
#define SVSD5_HAS_OUT 1
#define SVSD5_HAS_TRI 0
#define SVSD5_IRQ -1
#define SVSD5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SVSD5_IRQ_TYPE "NONE"
#define SVSD5_NAME "/dev/SVSD5"
#define SVSD5_RESET_VALUE 0
#define SVSD5_SPAN 16
#define SVSD5_TYPE "altera_avalon_pio"


/*
 * SWITCH configuration
 *
 */

#define ALT_MODULE_CLASS_SWITCH altera_avalon_pio
#define SWITCH_BASE 0x90a0
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 8
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 50000000
#define SWITCH_HAS_IN 0
#define SWITCH_HAS_OUT 1
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/SWITCH"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "sistema"


/*
 * TIMER configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x9020
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 1
#define TIMER_FREQ 50000000
#define TIMER_IRQ 0
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999
#define TIMER_MULT 0.001
#define TIMER_NAME "/dev/TIMER"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */


module sistema (
	button_external_connection_export,
	buzzer_external_connection_export,
	clk_clk,
	reset_reset_n,
	svsd0_external_connection_export,
	svsd1_external_connection_export,
	svsd2_external_connection_export,
	svsd3_external_connection_export,
	svsd4_external_connection_export,
	svsd5_external_connection_export,
	switch_external_connection_export);	

	input	[3:0]	button_external_connection_export;
	output	[9:0]	buzzer_external_connection_export;
	input		clk_clk;
	input		reset_reset_n;
	output	[3:0]	svsd0_external_connection_export;
	output	[3:0]	svsd1_external_connection_export;
	output	[3:0]	svsd2_external_connection_export;
	output	[3:0]	svsd3_external_connection_export;
	output	[3:0]	svsd4_external_connection_export;
	output	[3:0]	svsd5_external_connection_export;
	output	[7:0]	switch_external_connection_export;
endmodule

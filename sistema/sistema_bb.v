
module sistema (
	button_external_connection_export,
	buzzer_external_connection_export,
	clk_clk,
	reset_reset_n,
	svsd_external_connection_export,
	switch_external_connection_export);	

	output	[1:0]	button_external_connection_export;
	output	[9:0]	buzzer_external_connection_export;
	input		clk_clk;
	input		reset_reset_n;
	output	[31:0]	svsd_external_connection_export;
	output	[7:0]	switch_external_connection_export;
endmodule

	component sistema is
		port (
			button_external_connection_export : out std_logic_vector(1 downto 0);        -- export
			buzzer_external_connection_export : out std_logic_vector(9 downto 0);        -- export
			clk_clk                           : in  std_logic                    := 'X'; -- clk
			reset_reset_n                     : in  std_logic                    := 'X'; -- reset_n
			switch_external_connection_export : out std_logic_vector(7 downto 0);        -- export
			svsd0_external_connection_export  : out std_logic_vector(3 downto 0);        -- export
			svsd1_external_connection_export  : out std_logic_vector(3 downto 0);        -- export
			svsd2_external_connection_export  : out std_logic_vector(3 downto 0);        -- export
			svsd3_external_connection_export  : out std_logic_vector(3 downto 0);        -- export
			svsd4_external_connection_export  : out std_logic_vector(3 downto 0);        -- export
			svsd5_external_connection_export  : out std_logic_vector(3 downto 0)         -- export
		);
	end component sistema;

	u0 : component sistema
		port map (
			button_external_connection_export => CONNECTED_TO_button_external_connection_export, -- button_external_connection.export
			buzzer_external_connection_export => CONNECTED_TO_buzzer_external_connection_export, -- buzzer_external_connection.export
			clk_clk                           => CONNECTED_TO_clk_clk,                           --                        clk.clk
			reset_reset_n                     => CONNECTED_TO_reset_reset_n,                     --                      reset.reset_n
			switch_external_connection_export => CONNECTED_TO_switch_external_connection_export, -- switch_external_connection.export
			svsd0_external_connection_export  => CONNECTED_TO_svsd0_external_connection_export,  --  svsd0_external_connection.export
			svsd1_external_connection_export  => CONNECTED_TO_svsd1_external_connection_export,  --  svsd1_external_connection.export
			svsd2_external_connection_export  => CONNECTED_TO_svsd2_external_connection_export,  --  svsd2_external_connection.export
			svsd3_external_connection_export  => CONNECTED_TO_svsd3_external_connection_export,  --  svsd3_external_connection.export
			svsd4_external_connection_export  => CONNECTED_TO_svsd4_external_connection_export,  --  svsd4_external_connection.export
			svsd5_external_connection_export  => CONNECTED_TO_svsd5_external_connection_export   --  svsd5_external_connection.export
		);


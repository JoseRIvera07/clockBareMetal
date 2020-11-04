	component sistema is
		port (
			button_external_connection_export : out std_logic_vector(1 downto 0);         -- export
			buzzer_external_connection_export : out std_logic_vector(9 downto 0);         -- export
			clk_clk                           : in  std_logic                     := 'X'; -- clk
			reset_reset_n                     : in  std_logic                     := 'X'; -- reset_n
			svsd_external_connection_export   : out std_logic_vector(31 downto 0);        -- export
			switch_external_connection_export : out std_logic_vector(7 downto 0)          -- export
		);
	end component sistema;

	u0 : component sistema
		port map (
			button_external_connection_export => CONNECTED_TO_button_external_connection_export, -- button_external_connection.export
			buzzer_external_connection_export => CONNECTED_TO_buzzer_external_connection_export, -- buzzer_external_connection.export
			clk_clk                           => CONNECTED_TO_clk_clk,                           --                        clk.clk
			reset_reset_n                     => CONNECTED_TO_reset_reset_n,                     --                      reset.reset_n
			svsd_external_connection_export   => CONNECTED_TO_svsd_external_connection_export,   --   svsd_external_connection.export
			switch_external_connection_export => CONNECTED_TO_switch_external_connection_export  -- switch_external_connection.export
		);


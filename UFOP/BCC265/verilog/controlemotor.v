module Controlemotor(enable, seletor, velocidade, motor0, motor1, motor2, motor3);

	input enable;
	input [1:0] seletor;
	input [3:0] velocidade;
	output reg [7:0] motor0, motor1, motor2, motor3;
	
	reg [7:0] velocidademotor;
	
	always @(*) begin
		if (enable) begin
			if (velocidade == 0)
				velocidademotor = 8'b00000000; 
			else if (velocidade < 3)
				velocidademotor = 8'b00001111; 
			else if (velocidade < 8) 
				velocidademotor = 8'b00110011; 
			else
				velocidademotor = 8'b11000011; 
		
			case (seletor)
				0:	begin
						motor0 = velocidademotor;
						motor1 = 8'b00000000;
						motor2 = 8'b00000000;
						motor3 = 8'b00000000;
					end
				   
				1:	begin
						motor0 = 8'b00000000;
						motor1 = velocidademotor;
						motor2 = 8'b00000000;
						motor3 = 8'b00000000;
					end
				   
				2:	begin
						motor0 = 8'b00000000;
						motor1 = 8'b00000000;
						motor2 = velocidademotor;
						motor3 = 8'b00000000;
					end
				   
				3:	begin
						motor0 = 8'b00000000;
						motor1 = 8'b00000000;
						motor2 = 8'b00000000;
						motor3 = velocidademotor;
					end
			endcase
		end else begin
			motor0 = 8'b00000000;
			motor1 = 8'b00000000;
			motor2 = 8'b00000000;
			motor3 = 8'b00000000;
		end
	end

endmodule


module simulacao;

	reg e;
	reg [1:0] s;
	reg [3:0] v;
	wire [7:0] m0, m1, m2, m3;
	
	initial begin
		e = 0;
		s = 2'b00;
		v = 4'b0000;
	end
	
	initial begin
		$display("Tempo\tenable\tseletor\tvelocidade\tmotor0  \tmotor1  \tmotor2  \tmotor3");
		$monitor("%3d\t\t%b\t\t%b\t\t%b\t\t%b\t%b\t%b\t%b", $time, e, s, v, m0, m1, m2, m3);
	end
	
	always begin
		#1 {e, s, v} = {e, s, v} + 1;
	end
	
	initial begin 
		#128 $stop;
	end
	
	Controlemotor controle(.enable(e), .seletor(s), .velocidade(v), .motor0(m0), .motor1(m1), .motor2(m2), .motor3(m3));

endmodule
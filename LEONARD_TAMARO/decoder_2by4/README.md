This is a 2-by-4 decoder example, which is a makefile project and so no need for an IDE. 
Just cd into this folder and run the command 

    make decoder


A line decoder is a device that changes the input code into a set of signals.<br>
It takes an n-digit binary number and decodes it into 2<sup>n</sup> data lines.
It does the reverse of encoding. <br>
In the following truth table, only the output D0 is high when both inputs are zero, the output D1 is only high when input A0 is 1  and input A1 is zero. Output D2 is only high when A1 is 1 and A0 is zero and output D3 is only high when both inputs A0 and A1 are 1.  it decodes a two digit binary numbers.

Its truth table: 
<p align="left">
  <img src="truth_table.png" width="250"/>
</p>
<p>
d_a=0; d_b=0;
		wait(5,SC_NS);
		d_a=0; d_b=1;
		wait(5,SC_NS);
        d_a=1; d_b=0;
		wait(5,SC_NS);
		d_a=1; d_b=1;
		wait(5,SC_NS)
</p>

Circuit:
<p align="left">
  <img src="circuit.png" width="200"/>
</p>

Model of computation:
<p align="left">
  <img src="MOC.png" width="400"/>
</p>
Results:
The above MOC was implemented in systemc (code in this folder) and the following output found from traced signals.<br>
Traced signals timing diagram:
<p align="left">
  <img src="timing_diagram.png" width="400"/>
<p>

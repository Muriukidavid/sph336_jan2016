<html>
Tutorial 2:
Example of cascading decoder.

Open a terminal and just cd into this folder and run the command 

    make decoder

A line decoder is a device that changes the input code into a set of signals.<br>
It takes an n-digit binary number and decodes it into 2<sup>n</sup> data lines.
Decoding does the reverse of encoding. <br>

2-by-4 decoder decodes 2 digit binary numbers. 
This 2-by-4 decoder is made using 1-by-2 decoder where by when an ENABLE is low, A0=0 and A1=0 and
the output D0=00, when A0=0 and A1=1 the output D1=01, when A0=1 and A1=0 the output D2=10
and when A0=1 and A1=1 the output D3=11. 

Its?
<p align="left">
  <img src="truth_table.png" width="250"/>
</p>

Circuit:
<p align="left">
  <img src="circuit.jpeg" width="200"/>
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
</html>

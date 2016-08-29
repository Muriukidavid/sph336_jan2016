
Mwai Moses Muraguri : 
I39/4458/2014 <br/>

                       <h2><strong>SPH 336 REPORT::2BY4DECODER</strong></h2>
<br/>  
<h3><strong>INTRODUCTION</strong></h3><br/>

This is a 2-by-4 decoder example, which is a makefile project and so no need for an IDE. 
Just cd into this folder and run the command 

A line decoder is a device that changes the input code into a set of signals.<br>
It takes an n-digit binary number and decodes it into 2<sup>n</sup> data lines.
It does the reverse of encoding. <br>

In the following truth table, only the output Y0 is high when BOTH inputs are zero, and the output Y1 is high when the input is X0 is high,Y2 is high when input x1 is high and Y3 is high when BOTH inputs are high. it decodes a single digit binary number.
 <br><br/>

<strong>Its truth table:<strong> 
<p align="left">
  <img src="truthtable.PNG" width="250"/>
</p>

<strong>Circuit:</strong>
<p align="left">
  <img src="index.png" width="200"/>
</p>

<strong>Model of computation:</strong>
<p align="left">
  <img src="moc.png" width="400"/>
</p>
<strong>Results:
The above MOC was implemented in systemc (code in this folder) and the following output found from traced signals.<br>
Traced signals timing diagram:</strong>
<p align="left">
  <img src="timing_diagram.png" width="400"/>
</p>

<strong>Results of the terminal after calling the command make all is in the terminal picture below : </strong></br></br>
<img src="screenshot.png" width="400"/>

<p> Dennis Mabuka </p>
<p> I39/2464/2014 </p>


REPORT ON 2BY4DECODER

<p> INTRODUCTION </p>

A line decoder is a device that changes the input code into a set of signals.<br>
It takes an n-digit binary number and decodes it into 2<sup>n</sup> data lines.
It does the reverse of encoding. <br>


The following truth able below was used as aguide line
<p align="left">
  <img src="14166.png" width="250"/>
</p>

The representation of the circuit  used is as shown below

Circuit:
<p align="left">
  <img src="Decoder_2X4.png" width="200"/>
</p>

The Model Of Computation used is :
<p align="left">
  <img src="moc.png" width="400"/>
</p>
Results:
The above MOC was implemented in systemc (code in this folder) and the following output found from traced signals.<br>
Traced signals timing diagram:
<p align="left">
  <img src="simulation.png" width="400"/>
<p>

Terminal results are:

<p align="left">
  <img src="Screenshot.png" width="400"/>
<p>

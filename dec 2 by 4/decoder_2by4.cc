/*
 * decoder_2by4.cc
 *
 *  Created on: Mar 4, 2016
 *      Author: karibe
 */
#include"decoder_2by4.h"
#include"decoder_2by4b.h"
#include"driver.h"
#include "driver_2.h"
#include"monitor.h"
#include<systemc.h>

int sc_main(int argc, char *argv[]){
//some signals for interconnections
sc_signal<bool> in,in2, out1, out2,out3,out4;
//module instances
decoder dec("decoder_instance");
decoder_2 dec_2("decoder instance 2");

driver dr("driver");
driver_2 dr_2("driver_2")
monitor mn("monitor");
//interconnections b2in modules
dr.d_a(in);
dec.a(in);
dec.a2(in);

dec.a1(in2);
dec_2.a3(in2);
dr_2.d_a1(in2);

mn.m_a(in);
mn.m_a1(in2);

dec.b(out1);
mn.m_b(out1);

dec.c(out2);
mn.m_c(out2);


dec_2.b1(out3);
mn.m_b1(out3);

dec_2.c1(out4);
mn.m_c1(out4);




//create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("timing_diagram");
tf->set_time_unit(1, SC_NS);
//trace the signals interconnecting modules
sc_trace(tf, in, "binary_input1"); // signals to be traced
sc_trace(tf, in2, "binary_input2"); 
sc_trace(tf, out1, "D0");
sc_trace(tf, out2, "D1");
sc_trace(tf, out3, "D2");
sc_trace(tf, out4, "D3");

sc_trace(tf, out2, "input_is_one");

//run a simulation for 20 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(25,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
return 0;
}




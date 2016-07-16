//File: decoder_top.cpp

#ifndef DECODER_2BY4_CC_
#define DECODER_2BY4_CC_

#include "driver.h"
#include "monitor.h"
#include "decoder_2by4.h"
#include <systemc.h>

int sc_main(int argc, char* argv[])
{
//module instances
decoder dec("decoder");
driver dr("driver");
monitor mn ("Monitor");	

sc_signal<bool> t_enable; 
sc_signal<sc_uint<2> > t_select;
sc_signal<sc_lv<4> > t_z;
 
dec.de_enable(t_enable);
dec.de_select(t_select);
dec.z(t_z); 
 
dr.d_enable(t_enable);
dr.d_select(t_select);  
 
mn.m_select(t_select); 
mn.m_enable(t_enable);
mn.m_z(t_z); 
 
//create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("timing_diagram");
tf->set_time_unit(1, SC_NS);

sc_trace(tf, t_select, "A");
sc_trace(tf, t_z, "D");
sc_trace(tf, t_enable, "EN");
 
//run a simulation for 20 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(20, SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);

return(0); 
}
#endif

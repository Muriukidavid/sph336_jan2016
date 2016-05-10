 
//File: monitor.h
#ifndef MONITOR_H_
#define MONITOR_H_

#include <iostream>
#include <systemc.h>
using namespace std;
 
SC_MODULE (monitor)
{
sc_in<bool> m_enable;
sc_in<sc_uint<2> > m_select;
sc_in<sc_lv<4> > m_z;
 
SC_CTOR(monitor)
{
SC_METHOD (monita); 
sensitive << m_select<<m_enable <<m_z;
//dont_initialize();
}

void monita(void)
{
		cout<<"At time"<<sc_time_stamp()<<"::"<<" (select, enable) "<<m_select<<" | "<<m_enable<<" output: "<<m_z<<endl;
}
}; 

#endif

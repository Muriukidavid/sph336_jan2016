/*
 * monitor.h
 *
 *  Created on: Mar 16, 2016
 *      Author: karuoro
 */

#ifndef MONITOR_H_
#define MONITOR_H_
#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor2to4){
	sc_in<bool>m_a, m_b, m_c, m_d, m_e, m_f;

SC_CTOR(monitor2to4){
	SC_METHOD(monita);
	sensitive<<m_c<<m_d<<m_e<<m_f;
	dont_initialize();
}

void monita(void){
	cout<<"at "<<sc_time_stamp()<<" input is: "<<m_a<<" and "<<m_b<<" outputs are: "<<m_c<<", "<<m_d<<", "<<m_e<<" and "<<m_f<<endl; //shown as outputted from the decoder m_c being the first output but not to look as the truth table
}
};
#endif /* MONITOR_H_ */

/*
 * monitor.h
 *
 *  Created on: Mar 22, 2016
 *      Author: MachageFeddius
 */

#ifndef MONITOR_H_
#define MONITOR_H_
#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_a, m_b,m_c,m_d,m_e,m_f;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_a<<m_b<<m_c<<m_d<<m_e<<m_f;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" input is: "<<m_a<<m_b<<" outputs are: "<<m_c<<m_d<<m_e<<" and "<<m_f<<endl;
}
};
#endif /* MONITOR_H_ */

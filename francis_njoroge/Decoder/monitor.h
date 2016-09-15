/*
 * monitor.h
 *
 *  Created on: Mar 16, 2016
 *      Author: Munyigu Francis
 *	 I39/2477/2014
 */

#ifndef MONITOR_H_
#define MONITOR_H_
#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_A, m_B,m_out1, m_out2, m_out3, m_out4;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_output1<<m_output2<<m_output3<<m_output4;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" input is: "<<m_A<<" and "<<m_B<<" outputs are: "<<m_out1<<", "<<m_out2<<", "<<m_out3<<" and "<<m_out4<<endl;
}
};
#endif /* MONITOR_H_ */

/*
 * monitor.h
 *
 *  Created on: Mar 4, 2016
 *      Author: karibe
 */

#ifndef MONITOR_H_
#define MONITOR_H_
#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_a,m_a1, m_b,m_b1,m_c,m_c1;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_b<<m_c<<m_b1<<m_c1;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" inputs are: "<<m_a<<"  :  "<<m_a1<<"  outputs are: "<<m_b<<" ,"<<m_c<<"  , "<<m_b1<<" and "<<m_c1<<endl;
}
};
#endif /* MONITOR_H_ */

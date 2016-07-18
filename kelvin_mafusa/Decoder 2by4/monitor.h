/*
 * monitor.h
 *
        
 */

#ifndef MONITOR_H_
#define MONITOR_H_


#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_a1,m_a2,m_b1,m_b2,m_c1,m_c2;

 SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_b1<<m_b2<<m_c1<<m_c2;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" inputs are: "<<m_a1<<" and "<<m_a2<<" outputs are: "<<m_b1<<" and "<<m_b2<<" and "<<m_c1<<" and "<<m_c2<<endl;
}

};



#endif /* MONITOR_H_ */

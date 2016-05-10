//File:driver.h

#ifndef DRIVER_H_
#define DRIVER_H_
#include <systemc.h>
 
SC_MODULE (driver){
sc_out<bool> d_enable;
sc_out<sc_uint<2> > d_select;

sc_uint<2> pattern;

SC_CTOR(driver){
SC_THREAD (drive) ;
sensitive<< d_enable<<d_select;
}

void drive(void){
pattern = 0;
bool temp_enable;
while(1){

while(temp_enable==0){
d_select=pattern; 
d_enable=temp_enable;
wait (1, SC_NS);
pattern++;
}
}
}
};

#endif

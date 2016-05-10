//File : decoder2_by4.h

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include <systemc.h>
 
SC_MODULE(decoder) {
//input and output ports
sc_in<bool>de_enable;
sc_in<sc_uint<2> >de_select;
sc_out<sc_lv<4> >z;
 
SC_CTOR(decoder){
SC_METHOD(decode); 
sensitive<<de_enable<<de_select;
}

void decode(void){

if(de_enable==0)
{
switch(de_select.read())
{
case 0: z = 0; break;
case 1: z = 1; break;
case 2: z = 2; break;
case 3: z = 3; break;
}
}
else
	z=1111;
}
}; 
#endif

/*
 * decoder_2by4.h
 *
 *  Created on: Mar 4, 2016
 *      Author: karibe
 */

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
sc_in<bool> a1,a2;
sc_out<bool> d1,d2,d3,d4;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<a1<<a2;
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
	d1=(a==0)?1:0;
	d2=(a==1)?1:0;
	d3=(a==0)?1:0;
	d4=(a==1)?1:0;
}
};




#endif /* DECODER_2BY4_H_ */

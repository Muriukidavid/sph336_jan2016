/*
 * decoder_2by4.h
 *
 *  Created on: Mar 16, 2016
 *      Author: karuoro
 */

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>

SC_MODULE(decoder2to4){
//input and output ports

sc_in<bool> a, b;
sc_out<bool> c, d, e,f;

//constructor: where the processes are bound to simulation kernel

    SC_CTOR(decoder2to4){
	SC_METHOD(decode2to4);
	sensitive<<a<<b;
	//dont_initialize();
}

~decoder2to4(){
//delete stuff :P
}

void decode2to4(void){
	c=(a==0 && b==0)?1:0;
	d=(a==0 && b==1)?1:0;
	e=(a==0 && b==0)?1:0;
	f=(a==0 && b==1)?1:0;
}

};




#endif /* DECODER_2BY4_H_ */

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
sc_in<bool> a2,a3;
sc_out<bool> b1,c1;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder_2){
	SC_METHOD(decode_2);
	sensitive<<a2<<a3;
	//dont_initialize();
}

~decoder_2(){
//delete stuff :P
}

void decode_2(void){
	b1=(a2==1&&a3==0)?1:0;
	c1=(a2==1 &&a3==1)?1:0;
}
};




#endif /* DECODER_2BY4_H_ */

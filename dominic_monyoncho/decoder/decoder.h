/*
 * decoder header
 *
 *  Created on: April 24th, 2016
 *  Author: Monyoncho M Dominic
 */

#ifndef DECODER_H_
#define DECODER_H_
#include "systemc.h"

SC_MODULE (decoder) {
	sc_in<bool> in1, in2;
	sc_out<bool> out1, out2, out3, out4;

	//constructor: where the processes are bound to simulation kernel
	SC_CTOR(decoder){
		SC_METHOD(decode);
		sensitive<<in1<<in2;
		//dont_initialize();
	}

	~decoder(){
	//delete stuff :P
	}

	void decode(void){

		 b=(a==0)?1:0;
	     c=(a==1)?1:0;

		
	}
};

#endif /* DECODER_H_ */


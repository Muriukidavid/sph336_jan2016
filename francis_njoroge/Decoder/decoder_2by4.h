/*
 * decoder_2by4.h
 *
 *  Created on: Mar 16, 2016
 *      Author: Munyigu Francis
 *	 I39/2477/2014
 */

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
sc_in<bool> A,B;
sc_out<bool> out1,out2,out3,out4;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<A<<B;
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
	if (A==0 && B==0)
	{
		out1=1;
		out2=0;
		out3=0;
		out4=0;
	}
	else if (A==0 && B==1)
	{
		out1=0;
		out2=1;
		out3=0;
		out4=0;
	}
	else if (A==1 && B==0)
	{
		out1=0;
		out2=0;
		out3=1;
		out4=0;
	}
	else if (A==1 && B==1)
	{
		out1=0;
		out2=0;
		out3=0;
		out4=1;
	}


}
};




#endif /* DECODER_2BY4_H_ */

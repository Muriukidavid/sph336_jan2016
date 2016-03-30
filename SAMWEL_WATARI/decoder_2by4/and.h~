/*
 * decoder_2by4.h

 *
 * Created on: Mar 24,2016
 *    Author: samwel
  */

#ifndef AND_H_
#define AND_H_
#include<systemc.h>

SC_MODULE(and)
{
 sc_in<bool>A,B;
 sc_out<bool>C;

SC_CTOR(and)
{
 SC_METHOD(do_and);
 sensitive<<A<<B;
  //dont initialize
 }
 ~and(){
 //delete stuff :P
}

 void do_and(void)
{
 C=(A==0 && B==0)?0:1;
 C=(A==0 && B==1)?0:0;
}
};

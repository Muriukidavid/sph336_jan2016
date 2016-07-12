/*
 * decoder_2by4.h
 *
 *  Created on: Mar 20, 2016
 *      Author: samwel
 */

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>
#include "and.h"
#include "decoder_1by2.h"

SC_MODULE(decoder2)
{
 and n1,n2,n3,n4;
 decoder one,two;

sc_in<bool>one.a,two.a;
sc_ot<bool>n1.C,n2.C,n3.C,n4.C;

SC_CTOR(decoder2);
{
 SC_METHOD(decode2);
 sensitive<<one.a<<two.a;
}

 ~decode2(){
 //delete stuff :P
}
 
void decode2(void)
{
 n1.A(one.b);
 n1.B(two.b);

 n2.A(one.c);
 n2.B(two.b);

 n3.A(one.b);
 n3.B(two.c);

 n4.A(two.c);
 n4.B(one.c);

 n1.C=n1.do_and(A,B);
 n2.C=n2.do_and(A,B);
 n3.C=n3.do_and(A,B);
 n4.C=n4.do_and(A,B);
}
};

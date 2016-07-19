/*
 * decoder_2by4.h
 *
 *  Created on: Mar 24, 2016
 *      Author: Wilfred
 */

#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>
#include "and.h"
#include "decoder_1by2.h"

SC_MODULE(decoder2)
{
 andgate n1;
andgate n2;
andgate n3;
andgate n4;
 decoder one("decoder_1by2_instance");
decoder two("decoder_1by2_instance");

sc_in<bool>a,b;
sc_out<bool>c,d,e,f;

SC_CTOR(decoder2);
{
 SC_METHOD(decode2);
 sensitive<<a<<b;
}

 ~decode2(){
 //delete stuff :P
}
 
void decode2(void)
{
 n1.C=c;
 n2.C=d;
 n3.C=e;
 n4.C=f;

 n1.A(one.b);
 n1.B(two.b);

 n2.A(one.c);
 n2.B(two.b);

 n3.A(one.b);
 n3.B(two.c);

 n4.A(two.c);
 n4.B(one.c);

 c=n1.do_and(A,B);
 d=n2.do_and(A,B);
 e=n3.do_and(A,B);
 f=n4.do_and(A,B);
}
};



#endif /* DECODER_2BY4_H_ */

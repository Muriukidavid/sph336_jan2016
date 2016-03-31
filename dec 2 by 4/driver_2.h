/*
 * driver.h
 *
 *  Created on: Mar 4, 2016
 *      Author: karibe
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include<systemc>

SC_MODULE(driver_2){
sc_out<bool> d_a1;

SC_CTOR(driver_2){
	SC_THREAD(drive_2);
}

void drive_2(void){
	while(1){
		d_a1=0;
		wait(5,SC_NS);
		d_a1=1;
		wait(5,SC_NS);
		d_a1=0;
		wait(5,SC_NS);
			d_a1=1;
		wait(5,SC_NS);
	}
}
};
#endif /* DRIVER_H_ */

/*

 * Student_number.c
 *
 *  Created on: 2019. 10. 28.
 *      Author: ÀÌº´È­
 */

#include "SevenSeg.h"

int Student_number(){

	unsigned int *seg0_addr = (unsigned int*) SevenSeg0;

	*seg0_addr = SEG_0;
	*(seg0_addr + 1) = SEG_9;
	*(seg0_addr + 2) = SEG_0;
	*(seg0_addr + 3) = SEG_1;

	while(1);

	return 0;
}



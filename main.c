/*
 * main.
 *
 *  Created on: Sep 3, 2019
 *      Author: merro
 */
#include "DcMtr_int.h"
#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>
#include "Std_types.h"
#include "Bit_math.h"
#include "DcMtr_int.h"

int main (void)
{
	DcMtr_vidInit();
	while(1)
	{
		DcMtr_vidTurnRight();
		_delay_ms(10000);
		DcMtr_vidTurnLeft();
		_delay_ms(10000);
	}

	return 0;
}

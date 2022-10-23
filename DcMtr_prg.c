/*
 * DcMtr_prg.c
 *
 *  Created on: Sep 3, 2019
 *      Author: merro
 */


#include "Dio_int.h"
#include "Std_types.h"
#include "Bit_math.h"
#define F_CPU 8000000
#include <util/delay.h>
#include"DcMtr_cfg.h"
#include"DcMtr_int.h"

void DcMtr_vidInit(void)
{
	Dio_vidSetPinDir(DCMTR1_u8CW,DIO_u8OUTPUT);
	Dio_vidSetPinDir(DCMTR1_u8CCW,DIO_u8OUTPUT);
	Dio_vidSetPinDir(DCMTR2_u8CW,DIO_u8OUTPUT);
	Dio_vidSetPinDir(DCMTR2_u8CCW,DIO_u8OUTPUT);

}

void DcMtr_vidTurnRight(void)
{
	Dio_vidSetPinVal(DCMTR1_u8CW,DIO_u8HIGH);
	Dio_vidSetPinVal(DCMTR1_u8CCW,DIO_u8LOW);
	Dio_vidSetPinVal(DCMTR2_u8CW,DIO_u8HIGH);
	Dio_vidSetPinVal(DCMTR2_u8CCW,DIO_u8LOW);
}
void DcMtr_vidTurnLeft(void)
{
	Dio_vidSetPinVal(DCMTR1_u8CW,DIO_u8LOW);
	Dio_vidSetPinVal(DCMTR1_u8CCW,DIO_u8HIGH);
	Dio_vidSetPinVal(DCMTR2_u8CW,DIO_u8LOW);
	Dio_vidSetPinVal(DCMTR2_u8CCW,DIO_u8HIGH);
}

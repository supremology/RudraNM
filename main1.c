/*
 * Dummy_Code.c
 *
 * Check of defined values
 *
 * Created on: 10-Jun-2019
 * Author: Rudra M
 */
#include <stdio.h>

#include "ComStack_Types.h"

int main()
{
	if ( STD_ACTIVE == 0x01u )
	{
	printf("Hello Can driver\n");
	printf("sizeof = %d\n",sizeof(uint8));
	}
	return 0;
}

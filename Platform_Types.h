/*
 * Platform_Types.h
 *
 * Specifications of Platform Types
 * Created on: 10-Jun-2019
 * Author: Rudra M
 */

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/*Type Definitions */
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned  int uint32;
typedef unsigned long uint64;
typedef signed sint8;
typedef signed sint16;
typedef signed sint32;
typedef signed sint64;                 /* Standard AUTOSAR type of 64 bit signed */
typedef unsigned char uint8_least;     /* Standard AUTOSAR type of 8 bit unsigned */
typedef unsigned char uint16_least;    /* Standard AUTOSAR type of 16 bit unsigned */
typedef unsigned char uint32_least;    /* Standard AUTOSAR type of 32 bit unsigned */
typedef signed sint8_least;            /* Standard AUTOSAR type of 8 bit signed */
typedef signed sint16_least;           /* Standard AUTOSAR type of 16 bit signed */
typedef signed sint32_least;           /* Standard AUTOSAR type of 32 bit signed */
typedef float float32;                 /* Standard AUTOSAR type of 32-bit binary interchange format */
typedef float float64;                 /* Standard AUTOSAR type of 64-bit binary interchange format */




/* Indicate the processor type used */
enum CPU_TYPE
{
	CPU_TYPE_8  = 0x01, /* Indicating a 8 bit processor */
	CPU_TYPE_16 = 0x02, /* Indicating a 16 bit processor */
	CPU_TYPE_32 = 0x03, /* Indicating a 32 bit processor */
	CPU_TYPE_64 = 0x04, /* Indicating a 64 bit processor */
};

/* Indicate the bit order */
enum CPU_BIT_ORDER
{
	MSB_FIRST = 0x01, /* The most significant bit is the first bit of the bit sequence */
	MSB_LAST  = 0x02, /* The least significant bit is the first bit of the bit sequence */
};

/* Indicate the byte order */
enum CPU_BYTE_ORDER
{
	HIGH_BYTE_FIRST = 0x01, /* Within uint16, the high byte is located before the low byte */
	LOW_BYTE_FIRST  = 0x02, /* Within uint16, the low byte is located before the high byte */
};

/*Definition of symbols TRUE and FALSE */
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#endif /* End of PLATFORM_TYPE_H */

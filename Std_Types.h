/*
 * Std_Types.h
 *
 * Specification of Standard Type
 *
 * Created on: 10-Jun-2019
 * Author: Rudra M
 */
#ifndef STANDARD_TYPES_H
#define STANDARD_TYPES_H

#include "Platform_Types.h"

/* A standard API return type which is shared between the RTE and BSW modules
  * Range -
  * E_OK      : 0
  * E_NOT_OK  : 1
  * 0x02-0x3F : 2
  */
typedef uint8 Std_ReturnType;

/* Used to request the version of a BSW module  using the <Module name>_GetVersionInfo() function */
struct Std_VersionInfoType
{
	uint16 vendorID;
	uint16 moduleID;
	uint8 sw_major_version;
	uint8 sw_patch_version;
	uint8 sw_minor_version;
};
 /*Defined in the below way to avoid name clashes and redefinition problems since E_OK already defined within OSEK */
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK 0x00u

typedef unsigned char StatusType; /* OSEK Compliance */
#endif

#define E_NOT_OK 0x01u

#define STD_HIGH 0x01u /* Physical State 5V or 3.3V */
#define SLD_LOW 0x00u  /* Physical State 0V */

#define STD_IDLE 0x00u   /* Logical state active */
#define STD_ACTIVE 0x01u /* Logical state idle */

#define STD_OFF 0x00u /*ON State */
#define STD_ON 0x01u  /* OFF State */

#endif /*End of STD_TYPES_H */

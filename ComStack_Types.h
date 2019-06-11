/*
 * ComStack_types.h
 *
 * Type definitions for AUTOSAR Communication Stack
 *
 * Created on: 10-Jun-2019
 * Author: Rudra M
 */

#ifndef COMSTACK_TYPES_H
#define COMSTACK_TYPES_H

/* Inclusion of Standard Types */
#include "Std_Types.h"

/* Defines maximum number of PDUs used within one software module
 * Size set to uint8 if no software module deals with more than 256 PDUs
 * Size set to uint16 if at least one software module handles more than 256 PDUs
 */
typedef uint8 PduIdType;

/* Serves as length information of a PDU
 * If no segmentation, then length depends upon maximum payload size
 * If segmentation, size set to uint16
 */
typedef uint8 PduLengthType;

/* Store basic information of a PDU */
struct PduInfoType
{
	uint8* SduDataPtr;       /* Pointer to payload data of PDU */
	uint8*  MetaDataPtr;     /* Pointer to the meta data (eg. CAN ID, socket ID, diagnostic addresses) of the PDU, consisting of sequence */
	PduLengthType SduLength; /* Length of SDU in bytes */
};

/*Stores the identifier of a partial network cluster */
typedef uint8 PNCHandleType;

/* Specifies the parameter to which value has to be changed */
enum TPParameterType
{
	TP_STMIN = 0x00, /* Separation Time */
	TP_BS    = 0x01, /* Block Size */
	TP_BC    = 0x02, /* Bandwidth control parameter */
};

/* Store the result of a buffer request */
enum BufReq_ReturnType
{
	BUFREQ_OK       = 0x00, /* Set to 0 if buffer request accomplished successfully */
	BUFREQ_E_NOT_OK = 0x01, /* Set to 1 if buffer request not successful */
	BUFREQ_E_BUSY   = 0x02, /* Set to 2 if no buffer available. So, retry request after certain time */
	BUFREQ_E_OVFL   = 0x03, /* Set to 3 if no buffer of required length can be provided */
};

/* Store the state of TP buffer */
enum TpDataStateType
{
	TP_DATACONF    = 0x00, /* All data, that have been copied so far, are confirmed and can be removed from the TP buffer */
	TP_DATARETRY   = 0x01, /* This API call shall copy already copied data in order to recover from an error */
	TP_CONFPENDING = 0x02, /* The previously copied data must remain in the TP */
};

 /* Structure to store information about TP buffer handling */
struct RetryInfoType
{
	uint8 TpDataState;         /* Used to store the state of TP buffer */
	PduLengthType TxTpDataCnt; /* Offset from the current position which identifies the number of bytes to be retransmitted */
};

/* Used to store the identifier of a communication channel */
typedef uint8 NetworkHandleType;

/* Defines the configuration ID
 * If ID 0, default configuration
 * ID > 0, identify a configuration for Pretended Networking
 */
typedef uint8 IcomConfigIdType;

/* Defines the errors which occur during activating or deactivating Pretended Networking */
enum IcomSwitch_ErrorType
{
	ICOM_SWITCH_E_OK     = 0x00, /* Successful activation of pretended networking */
	ICOM_SWITCH_E_FAILED = 0x01, /* Unsuccessful activation of pretended networking */
};

#endif /* End of COMSTACK_TYPES_H */

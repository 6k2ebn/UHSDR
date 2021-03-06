/*  -*-  mode: c; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; coding: utf-8  -*-  */
/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		GNU GPLv3                                                      **
************************************************************************************/

#ifndef __HW_SI570
#define __HW_SI570

#include "osc_interface.h"

void 	Si570_Init();
bool    Si570_IsPresent();

// non-critical device information reading
float32_t   Si570_GetStartupFrequency();
uint8_t     Si570_GetI2CAddress();

#endif

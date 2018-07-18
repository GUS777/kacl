/******************************************************************************
*        
*     Open source
*        
*******************************************************************************
*  file name:          hal_rtc.h
*  author:              Chen Hao
*  version:             1.00
*  file description:   hardware rtc
*******************************************************************************
*  revision history:    date               version                  author
*
*  change summary:   2018-4-13             1.00                    Chen Hao
*
******************************************************************************/
#ifndef __HAL_RTC_H__
#define __HAL_RTC_H__
/******************************************************************************
* Include Files
******************************************************************************/
#include "basetype.h"
#include "board_config.h"

/******************************************************************************
* Macros
******************************************************************************/

/******************************************************************************
* Types
******************************************************************************/

/******************************************************************************
* Extern variable
******************************************************************************/
extern void hal_rtc_init(void);
extern void hal_rtc_set(uint32 timestamp);
extern uint32 hal_rtc_get(void);

#endif /*__HAL_RTC_H__*/


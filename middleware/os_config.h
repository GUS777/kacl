/******************************************************************************
*        
*     Open source
*        
*******************************************************************************
*  file name:          os_config.h
*  author:              Chen Hao
*  version:             1.00
*  file description:   manage macro to enable/disable os functions
*******************************************************************************
*  revision history:    date               version                  author
*
*  change summary:   2018-4-11      1.00                    Chen Hao
*
******************************************************************************/
#ifndef __OS_CONFIG_H__
#define __OS_CONFIG_H__
/******************************************************************************
* Include Files
******************************************************************************/
#include "hal_usart.h"

/******************************************************************************
* Macros
******************************************************************************/
//enable os trace log
#define OS_TRACE_LOG            1
#define OS_TRACE_LOG_SIZE   255 //bytes
#define OS_TRACE_COM hwSerial1

//tasks init sync
#define OS_TASK_SYNC_CHECK_INTERVAL 100 //ms

#endif /* __OS_CONFIG_H__ */


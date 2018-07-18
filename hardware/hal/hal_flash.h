/******************************************************************************
*        
*     Open source
*        
*******************************************************************************
*  file name:          hal_flash.h
*  author:              Chen Hao
*  version:             1.00
*  file description:   flash driver
*******************************************************************************
*  revision history:    date               version                  author
*
*  change summary:   2018-4-17      1.00                    Chen Hao
*
******************************************************************************/
#ifndef __HAL_FLASH_H__
#define __HAL_FLASH_H__
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
typedef struct
{
    void (*init)(void);
    void (*deint)(void);
    bool (*erase)(uint32 adr);
    uint32 (*read)(uint32 addr, uint8 *buff, uint32 len);
    int32 (*write)(uint32 addr, uint32 *buff, uint32 len);
}HAL_FLASH_TYPE;

/******************************************************************************
* Extern variable
******************************************************************************/
extern const HAL_FLASH_TYPE hwFlash;

#endif /*__HAL_FLASH_H__*/


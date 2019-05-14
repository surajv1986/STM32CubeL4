/**
  ******************************************************************************
  * @file    k_mfx.h
  * @author  MCD Application Team
  * @brief   Header for k_mfx.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license SLA0044,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        http://www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __K_MFX_H
#define __K_MFX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"   

/* Exported constants --------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void     k_MfxInit(void);
void     k_MfxDetectInt();

extern osMessageQId MfxEvent;
extern osSemaphoreId MfxIddSemaphore;


#ifdef __cplusplus
}
#endif

#endif /*__K_MFX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
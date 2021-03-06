/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USB_RESET_Pin GPIO_PIN_2
#define USB_RESET_GPIO_Port GPIOB
#define USB_STATUS_LED_Pin GPIO_PIN_2
#define USB_STATUS_LED_GPIO_Port GPIOJ
#define DLED_1_Pin GPIO_PIN_2
#define DLED_1_GPIO_Port GPIOG
#define DLED_2_Pin GPIO_PIN_3
#define DLED_2_GPIO_Port GPIOG
#define DLED_3_Pin GPIO_PIN_4
#define DLED_3_GPIO_Port GPIOG
#define DLED_4_Pin GPIO_PIN_5
#define DLED_4_GPIO_Port GPIOG
#define DLED_5_Pin GPIO_PIN_6
#define DLED_5_GPIO_Port GPIOG
#define DLED_6_Pin GPIO_PIN_7
#define DLED_6_GPIO_Port GPIOG
#define DEBUG_BTN_Pin GPIO_PIN_8
#define DEBUG_BTN_GPIO_Port GPIOG
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

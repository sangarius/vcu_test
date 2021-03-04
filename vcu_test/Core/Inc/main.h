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
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPIO_O1_Pin GPIO_PIN_14
#define GPIO_O1_GPIO_Port GPIOC
#define USER_BUTTON_Pin GPIO_PIN_0
#define USER_BUTTON_GPIO_Port GPIOC
#define RELAY2_O_Pin GPIO_PIN_1
#define RELAY2_O_GPIO_Port GPIOC
#define RELAY1_O_Pin GPIO_PIN_2
#define RELAY1_O_GPIO_Port GPIOC
#define XBEE_TX_UA4_Pin GPIO_PIN_0
#define XBEE_TX_UA4_GPIO_Port GPIOA
#define XBEE_RX_UA4_Pin GPIO_PIN_1
#define XBEE_RX_UA4_GPIO_Port GPIOA
#define TTL__TX_UA2_Pin GPIO_PIN_2
#define TTL__TX_UA2_GPIO_Port GPIOA
#define TTL_RX_UA2_Pin GPIO_PIN_3
#define TTL_RX_UA2_GPIO_Port GPIOA
#define GPIO_O5_Pin GPIO_PIN_10
#define GPIO_O5_GPIO_Port GPIOC
#define GPIO_O4_Pin GPIO_PIN_11
#define GPIO_O4_GPIO_Port GPIOC
#define GPIO_O3_Pin GPIO_PIN_4
#define GPIO_O3_GPIO_Port GPIOB
#define GPIO_O2_Pin GPIO_PIN_5
#define GPIO_O2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

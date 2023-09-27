/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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
#define digit_dis_4_Pin GPIO_PIN_4
#define digit_dis_4_GPIO_Port GPIOA
#define digit_dis_3_Pin GPIO_PIN_5
#define digit_dis_3_GPIO_Port GPIOA
#define digit_dis_2_Pin GPIO_PIN_6
#define digit_dis_2_GPIO_Port GPIOA
#define digit_dis_1_Pin GPIO_PIN_7
#define digit_dis_1_GPIO_Port GPIOA
#define _7seg_a_Pin GPIO_PIN_0
#define _7seg_a_GPIO_Port GPIOB
#define _7seg_b_Pin GPIO_PIN_1
#define _7seg_b_GPIO_Port GPIOB
#define _7seg_c_Pin GPIO_PIN_2
#define _7seg_c_GPIO_Port GPIOB
#define _7seg_d_Pin GPIO_PIN_3
#define _7seg_d_GPIO_Port GPIOB
#define _7seg_e_Pin GPIO_PIN_4
#define _7seg_e_GPIO_Port GPIOB
#define _7seg_f_Pin GPIO_PIN_5
#define _7seg_f_GPIO_Port GPIOB
#define _7seg_g_Pin GPIO_PIN_6
#define _7seg_g_GPIO_Port GPIOB
#define _7seg_dp_Pin GPIO_PIN_7
#define _7seg_dp_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
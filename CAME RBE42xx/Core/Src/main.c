/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdbool.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;

TIM_HandleTypeDef htim3;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

int currentBit=0;
bool boolArray[];

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_ADC2_Init(void);
static void MX_TIM3_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

void TIM3_test(){
	//for (int a=1; a<20; a++){


		//int delai=100;
		//HAL_GPIO_WritePin(TXDATA_GPIO_Port, TXDATA_Pin, GPIO_PIN_SET);
		//HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);

		//printf(htim22.Instance->CNT);
		//int test = htim22.Instance->CNT;

		//sprintf(UartBuffOut, "test");
		//HAL_UART_Transmit(&huart1, UartBuffOut, strlen(UartBuffOut), 1000);

		//printf("test");
		//sprintf("test2");
		//HAL_GPIO_WritePin(TXDATA_GPIO_Port, TXDATA_Pin, GPIO_PIN_RESET);
		//HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);

	//}

}

bool boolArray[99];

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_ADC1_Init();
  MX_ADC2_Init();
  MX_TIM3_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

	/*
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(GPIOB, _7seg_a_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_b_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_c_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_d_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_e_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_f_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_g_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_dp_Pin, GPIO_PIN_SET);

	//HAL_Delay(100);
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_RESET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_RESET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_RESET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_RESET);
	HAL_Delay(1);
	*/

	HAL_GPIO_WritePin(GPIOB, _7seg_a_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_b_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_c_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_d_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_e_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_f_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_g_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, _7seg_dp_Pin, GPIO_PIN_SET);

	HAL_ADC_Start(&hadc1);
	HAL_ADC_Start(&hadc2);
	HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
	HAL_ADC_PollForConversion(&hadc2, HAL_MAX_DELAY);

	uint32_t adc1_value = HAL_ADC_GetValue(&hadc1);
	uint32_t adc2_value = HAL_ADC_GetValue(&hadc2);

	bool rf_data;

	//while (rf_data != 0){

		if (HAL_GPIO_ReadPin(DATA_TDA5200_GPIO_Port, DATA_TDA5200_Pin) == GPIO_PIN_RESET) {
			if (HAL_TIM_Base_Start_IT(&htim3) != HAL_OK) //Timer 3 start
			{
			/* Starting Error */
			Error_Handler();
			}
			while (currentBit < 100) {} //wait

			HAL_TIM_Base_Stop_IT(&htim3); //Timer 3 stop
			if (currentBit >= 99) {currentBit = 0;}

			if ( (boolArray[58] == 0) && (boolArray[57] == 0) && (boolArray[56] == 0) && (boolArray[55] == 1) && (boolArray[54] == 1) && (boolArray[53] == 0) && (boolArray[52] == 1) && (boolArray[51] == 1) && (boolArray[50] == 1)  )
			{
				HAL_GPIO_TogglePin(Relay1_GPIO_Port, Relay1_Pin);
				for (int i=0; i<65; i++)
				{
					printf("%d", boolArray[i]);
				}
				printf("\n");
				HAL_Delay(800);
			}
		}
		//boolArray;


		/*int __io_putchar(int ch) {
		    ITM_SendChar(ch);
		    return ch;
		}*/
		/*
		else if(rf_data == 1){
			HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
			//HAL_Delay(10);
		}
		*/

  	  //}

		if (adc2_value < 1000){
		HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_RESET);
		//printf("Hello World!\n");
		HAL_Delay(100);
	}

	else if (adc1_value < 1000){
		HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_RESET);
		HAL_Delay(100);
	}
	else if (adc2_value > 2000){
		HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_RESET);
		HAL_Delay(100);
	}
	else if (adc1_value > 2000){
		HAL_GPIO_WritePin(GPIOA, digit_dis_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin, GPIO_PIN_RESET);
		HAL_Delay(100);
	}

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
  PeriphClkInit.AdcClockSelection = RCC_ADCPCLK2_DIV2;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Common config
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief ADC2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC2_Init(void)
{

  /* USER CODE BEGIN ADC2_Init 0 */

  /* USER CODE END ADC2_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC2_Init 1 */

  /* USER CODE END ADC2_Init 1 */

  /** Common config
  */
  hadc2.Instance = ADC2;
  hadc2.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc2.Init.ContinuousConvMode = DISABLE;
  hadc2.Init.DiscontinuousConvMode = DISABLE;
  hadc2.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc2.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc2.Init.NbrOfConversion = 1;
  if (HAL_ADC_Init(&hadc2) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
  if (HAL_ADC_ConfigChannel(&hadc2, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC2_Init 2 */

  /* USER CODE END ADC2_Init 2 */

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 0;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 1664;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_HalfDuplex_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, Relay3_Pin|Relay4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, digit_dis_4_Pin|digit_dis_3_Pin|digit_dis_2_Pin|digit_dis_1_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, _7seg_a_Pin|_7seg_b_Pin|_7seg_c_Pin|Relay2_Pin
                          |Relay1_Pin|_7seg_d_Pin|_7seg_e_Pin|_7seg_f_Pin
                          |_7seg_g_Pin|_7seg_dp_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Relay3_Pin Relay4_Pin */
  GPIO_InitStruct.Pin = Relay3_Pin|Relay4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : digit_dis_4_Pin digit_dis_3_Pin digit_dis_2_Pin digit_dis_1_Pin */
  GPIO_InitStruct.Pin = digit_dis_4_Pin|digit_dis_3_Pin|digit_dis_2_Pin|digit_dis_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : _7seg_a_Pin _7seg_b_Pin _7seg_c_Pin _7seg_e_Pin
                           _7seg_f_Pin _7seg_g_Pin _7seg_dp_Pin */
  GPIO_InitStruct.Pin = _7seg_a_Pin|_7seg_b_Pin|_7seg_c_Pin|_7seg_e_Pin
                          |_7seg_f_Pin|_7seg_g_Pin|_7seg_dp_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : EEPROM_SCL_Pin EEPROM_SDA_Pin */
  GPIO_InitStruct.Pin = EEPROM_SCL_Pin|EEPROM_SDA_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : Relay2_Pin Relay1_Pin _7seg_d_Pin */
  GPIO_InitStruct.Pin = Relay2_Pin|Relay1_Pin|_7seg_d_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : DATA_TDA5200_Pin */
  GPIO_InitStruct.Pin = DATA_TDA5200_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DATA_TDA5200_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

PUTCHAR_PROTOTYPE{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 0xFFFF);

  return ch;
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

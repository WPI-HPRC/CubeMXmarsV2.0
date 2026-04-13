/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_IN4_Pin GPIO_PIN_5
#define PWM_IN4_GPIO_Port GPIOE
#define BO_I2C2_SDA_Pin GPIO_PIN_0
#define BO_I2C2_SDA_GPIO_Port GPIOF
#define BO_I2C2_SCL_Pin GPIO_PIN_1
#define BO_I2C2_SCL_GPIO_Port GPIOF
#define SD_CD_Pin GPIO_PIN_2
#define SD_CD_GPIO_Port GPIOF
#define ASM_INT2_Pin GPIO_PIN_3
#define ASM_INT2_GPIO_Port GPIOF
#define ASM_INT1_Pin GPIO_PIN_4
#define ASM_INT1_GPIO_Port GPIOF
#define MOSFET_CURRENT_Pin GPIO_PIN_0
#define MOSFET_CURRENT_GPIO_Port GPIOC
#define PWM_OUT1_Pin GPIO_PIN_0
#define PWM_OUT1_GPIO_Port GPIOA
#define PWM_OUT2_Pin GPIO_PIN_1
#define PWM_OUT2_GPIO_Port GPIOA
#define PWM_OUT3_Pin GPIO_PIN_2
#define PWM_OUT3_GPIO_Port GPIOA
#define PWM_OUT4_Pin GPIO_PIN_3
#define PWM_OUT4_GPIO_Port GPIOA
#define CANARD_POWER_EN_Pin GPIO_PIN_4
#define CANARD_POWER_EN_GPIO_Port GPIOA
#define RADIO_M0_Pin GPIO_PIN_2
#define RADIO_M0_GPIO_Port GPIOB
#define RADIO_AUX_Pin GPIO_PIN_11
#define RADIO_AUX_GPIO_Port GPIOF
#define RADIO_M1_Pin GPIO_PIN_12
#define RADIO_M1_GPIO_Port GPIOF
#define BATTERY_VOLTAGE_Pin GPIO_PIN_13
#define BATTERY_VOLTAGE_GPIO_Port GPIOF
#define GPS_I2C4_SCL_Pin GPIO_PIN_14
#define GPS_I2C4_SCL_GPIO_Port GPIOF
#define GPS_I2C4_SDA_Pin GPIO_PIN_15
#define GPS_I2C4_SDA_GPIO_Port GPIOF
#define AIRBRAKES_IN_Pin GPIO_PIN_9
#define AIRBRAKES_IN_GPIO_Port GPIOE
#define PWM_OUT5_Pin GPIO_PIN_11
#define PWM_OUT5_GPIO_Port GPIOE
#define PWM_OUT6_Pin GPIO_PIN_13
#define PWM_OUT6_GPIO_Port GPIOE
#define PWM_OUT7_Pin GPIO_PIN_14
#define PWM_OUT7_GPIO_Port GPIOE
#define RADIO_TX_Pin GPIO_PIN_10
#define RADIO_TX_GPIO_Port GPIOB
#define RADIO_RX_Pin GPIO_PIN_11
#define RADIO_RX_GPIO_Port GPIOB
#define GPS_TX_Pin GPIO_PIN_14
#define GPS_TX_GPIO_Port GPIOB
#define GPS_RX_Pin GPIO_PIN_15
#define GPS_RX_GPIO_Port GPIOB
#define RED_LED_Pin GPIO_PIN_9
#define RED_LED_GPIO_Port GPIOD
#define GREEN_LED_Pin GPIO_PIN_10
#define GREEN_LED_GPIO_Port GPIOD
#define BLUE_LED_Pin GPIO_PIN_11
#define BLUE_LED_GPIO_Port GPIOD
#define MOSFET_EN_Pin GPIO_PIN_14
#define MOSFET_EN_GPIO_Port GPIOD
#define PWM_IN2_Pin GPIO_PIN_6
#define PWM_IN2_GPIO_Port GPIOC
#define PWM_OUT8_Pin GPIO_PIN_8
#define PWM_OUT8_GPIO_Port GPIOA
#define LIS_CS_Pin GPIO_PIN_15
#define LIS_CS_GPIO_Port GPIOA
#define LPS_CS_Pin GPIO_PIN_0
#define LPS_CS_GPIO_Port GPIOD
#define LPS_INT_Pin GPIO_PIN_1
#define LPS_INT_GPIO_Port GPIOD
#define LEVEL_SHIFT_EN_Pin GPIO_PIN_4
#define LEVEL_SHIFT_EN_GPIO_Port GPIOD
#define ASM_CS_Pin GPIO_PIN_5
#define ASM_CS_GPIO_Port GPIOD
#define SENSORS_SPI1_MOSI_Pin GPIO_PIN_7
#define SENSORS_SPI1_MOSI_GPIO_Port GPIOD
#define SENSORS_SPI1_MISO_Pin GPIO_PIN_9
#define SENSORS_SPI1_MISO_GPIO_Port GPIOG
#define SENSORS_SPI1_SCK_Pin GPIO_PIN_11
#define SENSORS_SPI1_SCK_GPIO_Port GPIOG
#define CAM_SPI6_MISO_Pin GPIO_PIN_12
#define CAM_SPI6_MISO_GPIO_Port GPIOG
#define CAM_SPI6_SCK_Pin GPIO_PIN_13
#define CAM_SPI6_SCK_GPIO_Port GPIOG
#define CAM_SPI6_MOSI_Pin GPIO_PIN_14
#define CAM_SPI6_MOSI_GPIO_Port GPIOG
#define LSM_INT1_Pin GPIO_PIN_3
#define LSM_INT1_GPIO_Port GPIOB
#define LSM_CS_Pin GPIO_PIN_4
#define LSM_CS_GPIO_Port GPIOB
#define PWM_IN1_Pin GPIO_PIN_5
#define PWM_IN1_GPIO_Port GPIOB
#define PWM_IN3_Pin GPIO_PIN_6
#define PWM_IN3_GPIO_Port GPIOB
#define GPS_RESET_Pin GPIO_PIN_8
#define GPS_RESET_GPIO_Port GPIOB
#define GPS_INT_Pin GPIO_PIN_9
#define GPS_INT_GPIO_Port GPIOB
#define LSM_INT2_Pin GPIO_PIN_1
#define LSM_INT2_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

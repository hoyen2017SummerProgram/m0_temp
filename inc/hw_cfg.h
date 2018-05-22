/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HE_CFG_H
#define __HE_CFG_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"

/* Exported types ------------------------------------------------------------*/
typedef enum 
{
  LED1 = 0,
  LED2 = 1
} Led_TypeDef;


#define LEDn                             4

#define LED1_PIN                         GPIO_Pin_5
#define LED1_GPIO_PORT                   GPIOA
#define LED1_GPIO_CLK                    RCC_AHBPeriph_GPIOA
  
#define LED2_PIN                         GPIO_Pin_6
#define LED2_GPIO_PORT                   GPIOA
#define LED2_GPIO_CLK                    RCC_AHBPeriph_GPIOA
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Gpio_Init(void);
void LED_Toggle(Led_TypeDef LED);
#endif /* __HE_CFG_H */

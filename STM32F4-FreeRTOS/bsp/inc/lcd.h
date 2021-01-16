#ifndef __LCD_H
#define __LCD_H
#include "stm32f4xx.h"
/*����Һ���ź��ߵ����ø��ñ����AF9*/
#define GPIO_AF_LTDC_AF9                ((uint8_t)0x09)

//��ɫ������
#define LTDC_R0_GPIO_PORT               GPIOH
#define LTDC_R0_GPIO_CLK                RCC_AHB1Periph_GPIOH
#define LTDC_R0_GPIO_PIN                GPIO_Pin_2
#define LTDC_R0_PINSOURCE               GPIO_PinSoucre2
#define LTDC_R0_AF                      GPIO_AF_LTDC            //ʹ��LTDC���ñ��

#define LTDC_R3_GPIO_PORT               GPIOB
#define LTDC_R3_GPIO_CLK                RCC_AHB1Periph_GPIOB
#define LTDC_R3_GPIO_PIN                GPIO_Pin_0
#define LTDC_R3_PINSOURCE               GPIO_PinSoucre0
#define LTDC_R3_AF                      GPIO_AF_LTDC_AF9            //ʹ��LTDC���ñ��

#endif
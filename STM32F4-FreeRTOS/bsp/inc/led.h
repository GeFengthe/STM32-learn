#ifndef __LED_H
#define __LED_H
#include "stm32f4xx.h"

#define RED_GPIO_Pin        GPIO_Pin_1
#define RED_GPIO_Port       GPIOB
#define GREEN_GPIO_Pin      GPIO_Pin_0
#define GREEN_GPIO_Port     GPIOB



void init_led(void);
void LedSwitch(u32 Pin, u8 mode);
#endif
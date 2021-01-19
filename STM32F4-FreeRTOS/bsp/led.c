#include "led.h"
#define ON      1
#define OFF     0

void init_led(void)
{
    GPIO_InitTypeDef GPIO_InitStruct;
    RCC_AHB1PeriphClockCmd(RCC_AHB1ENR_GPIOBEN,ENABLE);
    
    GPIO_InitStruct.GPIO_Pin = RED_GPIO_Pin;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_100MHz;
    GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
    
    GPIO_Init(RED_GPIO_Port,&GPIO_InitStruct);
    
    GPIO_InitStruct.GPIO_Pin = GREEN_GPIO_Pin;
    GPIO_Init(GREEN_GPIO_Port,&GPIO_InitStruct);
    

    
    GPIO_SetBits(GPIOB,RED_GPIO_Pin|GREEN_GPIO_Pin);
      
}

void LedSwitch(u32 Pin, u8 mode)
{
    if(mode == ON)
    {
        GPIO_WriteBit(GPIOB,Pin,0);
    }else{
        GPIO_WriteBit(GPIOB,Pin,1);
    }
    
}
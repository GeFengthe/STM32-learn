#include "lcd.h"

static void LCD_GPIO_Config(void)
{
	GPIO_InitTypeDef	GPIO_InitStruct;
	RCC_AHB1PeriphClockCmd(LTDC_DE_CLK|LTDC_CLK_CLK|LTDC_VSY_CLK|LTDC_HSY_CLK, ENABLE);
	RCC_AHB1PeriphClockCmd(LTDC_R3_CLK|LTDC_R4_CLK|LTDC_R5_CLK|LTDC_R6_CLK|LTDC_R7_CLK,ENABLE);
	RCC_AHB1PeriphClockCmd(LTDC_B3_CLK|LTDC_B4_CLK|LTDC_B5_CLK|LTDC_B6_CLK|LTDC_B7_CLK,ENABLE);
	RCC_AHB1PeriphClockCmd(LTDC_G2_CLK|LTDC_G3_CLK|LTDC_G4_CLK|LTDC_G5_CLK|LTDC_G6_CLK|LTDC_G7_CLK,ENABLE);
//DE
	GPIO_InitStruct.GPIO_Pin = LTDC_DE_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_Init(LTDC_DE_PORT,&GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_DE_PORT,LTDC_DE_PINSOURCE,LTDC_DE_AF);

//CLK
	GPIO_InitStruct.GPIO_Pin = LTDC_CLK_PIN;
	GPIO_Init(LTDC_CLK_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_CLK_PORT, LTDC_CLK_PINSOURCE, LTDC_CLK_AF);

//VSY
	GPIO_InitStruct.GPIO_Pin = LTDC_VSY_PIN;
	GPIO_Init(LTDC_VSY_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_VSY_PORT, LTDC_VSY_PINSOURCE, LTDC_VSY_AF);
//HSY
	GPIO_InitStruct.GPIO_Pin = LTDC_HSY_PIN;
	GPIO_Init(LTDC_HSY_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_HSY_PORT, LTDC_HSY_PINSOURCE, LTDC_HSY_AF);
//R3
	GPIO_InitStruct.GPIO_Pin = LTDC_R3_Pin;
	GPIO_Init(LTDC_R3_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_R3_PORT, LTDC_R3_PINSOURCE, LTDC_R3_AF);
//R4
	GPIO_InitStruct.GPIO_Pin = LTDC_R4_Pin;
	GPIO_Init(LTDC_R4_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_R4_PORT, LTDC_R4_PINSOURCE, LTDC_R4_AF);
//R5
	GPIO_InitStruct.GPIO_Pin = LTDC_R5_Pin;
	GPIO_Init(LTDC_R5_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_R5_PORT, LTDC_R5_PINSOURCE, LTDC_R5_AF);
	
//R6
	GPIO_InitStruct.GPIO_Pin = LTDC_R6_Pin;
	GPIO_Init(LTDC_R6_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_R6_PORT, LTDC_R6_PINSOURCE, LTDC_R6_AF);
//R7
	GPIO_InitStruct.GPIO_Pin = LTDC_R7_Pin;
	GPIO_Init(LTDC_R7_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_R7_PORT, LTDC_R7_PINSOURCE, LTDC_R7_AF);
//G2
	GPIO_InitStruct.GPIO_Pin = LTDC_G2_Pin;
	GPIO_Init(LTDC_G2_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G2_PORT,LTDC_G2_PINSOURCE,LTDC_G2_AF);
//G3
	GPIO_InitStruct.GPIO_Pin = LTDC_G3_Pin;
	GPIO_Init(LTDC_G3_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G3_PORT,LTDC_G3_PINSOURCE,LTDC_G3_AF);
//G4
	GPIO_InitStruct.GPIO_Pin = LTDC_G4_Pin;
	GPIO_Init(LTDC_G4_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G4_PORT,LTDC_G4_PINSOURCE,LTDC_G4_AF);
//G5
	GPIO_InitStruct.GPIO_Pin = LTDC_G5_Pin;
	GPIO_Init(LTDC_G5_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G5_PORT,LTDC_G5_PINSOURCE,LTDC_G5_AF);
//G6
	GPIO_InitStruct.GPIO_Pin = LTDC_G6_Pin;
	GPIO_Init(LTDC_G6_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G6_PORT,LTDC_G6_PINSOURCE,LTDC_G6_AF);
//G7
	GPIO_InitStruct.GPIO_Pin = LTDC_G7_Pin;
	GPIO_Init(LTDC_G7_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_G7_PORT,LTDC_G7_PINSOURCE,LTDC_G7_AF);
//B3
	GPIO_InitStruct.GPIO_Pin = LTDC_B3_Pin;
	GPIO_Init(LTDC_B3_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_B3_PORT, LTDC_B3_PINSOURCE,LTDC_B3_AF);
//B4
	GPIO_InitStruct.GPIO_Pin = LTDC_B4_Pin;
	GPIO_Init(LTDC_B4_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_B4_PORT, LTDC_B4_PINSOURCE,LTDC_B4_AF);
//B5
	GPIO_InitStruct.GPIO_Pin = LTDC_B5_Pin;
	GPIO_Init(LTDC_B5_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_B5_PORT, LTDC_B5_PINSOURCE,LTDC_B5_AF);
//B6
	GPIO_InitStruct.GPIO_Pin = LTDC_B6_Pin;
	GPIO_Init(LTDC_B6_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_B6_PORT, LTDC_B6_PINSOURCE,LTDC_B6_AF);
//B7
	GPIO_InitStruct.GPIO_Pin = LTDC_B7_Pin;
	GPIO_Init(LTDC_B7_PORT, &GPIO_InitStruct);
	GPIO_PinAFConfig(LTDC_B7_PORT, LTDC_B7_PINSOURCE,LTDC_B7_AF);	
	
}

void LCD_Init(void)
{
	LTDC_InitTypeDef	LTDC_InitStruct;
//开LTDC 时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_LTDC, ENABLE);
//LCD_GPIO引脚配置

//LCD时钟的配置
	RCC_PLLSAICmd(ENABLE);
	while(RCC_GetFlagStatus(RCC_FLAG_PLLSAIRDY) == RESET);

	LTDC_InitStruct.LTDC_HSPolarity = LTDC_HSPolarity_AL;					//水平同步极性
	LTDC_InitStruct.LTDC_VSPolarity = LTDC_VSPolarity_AL;					//垂直同步极性
	LTDC_InitStruct.LTDC_DEPolarity = LTDC_DEPolarity_AL;					//数据使能极性
	LTDC_InitStruct.LTDC_PCPolarity = LTDC_PCPolarity_IPC;					//像素时钟极性
	LTDC_InitStruct.LTDC_HorizontalSync = 10-1;								//水平同步宽度
	LTDC_InitStruct.LTDC_VerticalSync = 2-1;								//垂直同步宽度
	LTDC_InitStruct.LTDC_AccumulatedHBP = 10+20-1;							//水平同步后沿宽度
	LTDC_InitStruct.LTDC_AccumulatedVBP = 2+2-1;							//垂直同步后沿宽度
	LTDC_InitStruct.LTDC_AccumulatedActiveH = 10+20+480-1;					//有效宽度
	LTDC_InitStruct.LTDC_AccumulatedActiveW = 2+2+272-1;					//有效高度
	LTDC_InitStruct.LTDC_TotalHeigh = 10+20+480+10-1;						//总宽度
	LTDC_InitStruct.LTDC_TotalWidth = 2+2+272+4-1;							//总高度
	LTDC_InitStruct.LTDC_BackgroundRedValue = 0;							//屏幕背景层红色部分	
	LTDC_InitStruct.LTDC_BackgroundGreenValue = 0;							//屏幕背景层绿色部分	
	LTDC_InitStruct.LTDC_BackgroundBlueValue = 0;							//屏幕背景层蓝色部分	
	LTDC_Init(&LTDC_InitStruct);
	
}

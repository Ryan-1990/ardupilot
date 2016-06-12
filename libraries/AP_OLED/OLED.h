/******************************************************************************\
*  Copyright (C) 2016 Nan Li, RMIT University
*  ALL RIGHTS RESERVED
*  Filename: OLED.h
*  Version: 1.0
*  Author: Nan Li
\******************************************************************************/


#pragma once
/*
#define D0=0   hal.gpio->write(53, 0)
#define D0=1   hal.gpio->write(53, 1)
#define D1=0   hal.gpio->write(52, 0)
#define D1=1   hal.gpio->write(52, 1)
#define RST=0  hal.gpio->write(51, 0)
#define RST=1  hal.gpio->write(51, 1)
#define DC=0   hal.gpio->write(50, 0)
#define DC=1   hal.gpio->write(50, 1)
*/
#define DLY_ms hal.scheduler->delay
/*
#define XLevelL		0x00
#define XLevelH		0x10
#define XLevel		((XLevelH&0x0F)*16+XLevelL)
#define Max_Column	128
#define Max_Row		  64
*/

#define	Brightness	0xFF 
#define X_WIDTH 128
#define Y_WIDTH 64

class OLED {
public:
	void OLED_WrDat(unsigned char data);
	void OLED_WrCmd(unsigned char cmd);
	void OLED_Set_Pos(unsigned char x, unsigned char y);
	void adjust(unsigned char a);
	void SetStartColumn(unsigned char d);
	void SetAddressingMode(unsigned char d);
	void SetColumnAddress(unsigned char a, unsigned char b);
	void SetPageAddress(unsigned char a, unsigned char b);
	void SetStartLine(unsigned char d);
	void SetContrastControl(unsigned char d);
	void Set_Charge_Pump(unsigned char d);
	void Set_Segment_Remap(unsigned char d);
	void Set_Entire_Display(unsigned char d);
	void Set_Inverse_Display(unsigned char d);
	void Set_Multiplex_Ratio(unsigned char d);
	void Set_Display_On_Off(unsigned char d);
	void SetStartPage(unsigned char d);
	void Set_Common_Remap(unsigned char d);
	void Set_Display_Offset(unsigned char d);
	void Set_Display_Clock(unsigned char d);
	void Set_Precharge_Period(unsigned char d);
	void Set_Common_Config(unsigned char d);
	void Set_VCOMH(unsigned char d);
	void Set_NOP(void);

	void OLED_Init(void);
	void OLED_P6x8Str(unsigned char x,unsigned char y,char ch[],unsigned char ConverseSelect);
	void OLED_Fill(void);
	void OLED_Clear(void);
	void OLED_draw_line(unsigned int data[]);
	void OLED_clear_line(unsigned int line);
};

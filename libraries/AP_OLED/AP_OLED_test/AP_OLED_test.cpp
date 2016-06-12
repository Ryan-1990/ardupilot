/*
  simple test of OLED
  Author: Nan Li
 */

#include <AP_HAL/AP_HAL.h>
#include <AP_OLED/OLED.h>


const AP_HAL::HAL& hal = AP_HAL::get_HAL();

OLED oled;

void setup(void)
{
	oled.OLED_Init();
	char str[]="Hello ArduPilot!";
	oled.OLED_P6x8Str(15,0,str,0);
	oled.OLED_P6x8Str(15,1,str,1);
	oled.OLED_P6x8Str(15,2,str,0);
	oled.OLED_P6x8Str(15,3,str,1);
}


void loop(void)
{
	//
}

AP_HAL_MAIN();

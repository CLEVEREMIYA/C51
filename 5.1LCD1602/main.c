#include <REGX52.H>
#include "LCD1602.H"

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"CSY");
	while(1);
}
#include <REGX52.H>

void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}


void main()
{
	P1_0 = 1;	//一位给低电平 亮灯
	while(1)
	{
		if(P3_0 == 0)
		{
			Delay1ms(20);
			while(P3_0 == 0);
			Delay1ms(20);
			P1_0 = ~P1_0;
		}else
		{
			P1_0 = 1;
		}
	}
}
#include <REGX52.H>
#include <INTRINS.H>

void DelayXms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
			_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms --;
	}

}

void main()
{
	P2 = 0xFE;
}
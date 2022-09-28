#include <REGX52.H>

void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	
	while(xms--)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
	
}




void main(){
	unsigned int count = 0;
	while(1)
	{
		P1=0xFE<<count;	//1111 1110
		count++;
		Delay1ms(500);
		if(count==8){
			count =0;
		}
		//Delay1ms(500);
		//P2=0xFD;	//1111 1101
		//Delay1ms(500);

	}
}
#include <REGX52.H>
						  //1111 1110 1111 1101 1111 1011 1111 0111
unsigned char location[] = {0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};	
unsigned char number[]	=  {0x3F,0x06,0x5B,0x4F};//0:abcdef 0011 1111;1:bc 0000 0110;2 abdeg 0101 1011;3:abcdg 0100 1111

void DelayXms(unsigned xms)		//@11.0592MHz
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

void NiXie(unsigned int NiXielocation,unsigned int num)
{
	P2_7 = 1;
	switch(NiXielocation)
	{
			case 1 : P0 = location[0];
		break;
			case 2 : P0 = location[1];
		break;
			case 3 : P0 = location[2];
		break;
			case 4 : P0 = location[3];
		break;
			case 5 : P0 = location[4];
		break;
			case 6 : P0 = location[5];
		break;
			case 7 : P0 = location[6];
		break;
			case 8 : P0 = location[7]; 
		break;
	}
	P2_7 = 0;
	DelayXms(1);
	P0 = 0x00;
	P0=number[num];
}


void main()
{
	while(1)
	{
		NiXie(6,1);
//		DelayXms(500);
		NiXie(7,2);
//		DelayXms(500);
		NiXie(8,3);
//		DelayXms(500);
	}

}
#include <stdio.h>

int main(void)
{
	int fahr;
	fahr = 100;
	
	int celsius1000 = 1000 * 5 * (fahr -32) / 9;
	//int celsius1000 = 5000 * (fahr -32) / 9;
	
	int left;
	int right;
	
	left = celsius1000 / 1000;
	right = (celsius1000 % 1000 +5) / 10;
	//right = (celsius1000 - left * 1000 + 5 ) / 10;
	
	printf("fahr : %d ------> celsius : %d.%d \n",fahr,left,right);
	return 0;
}

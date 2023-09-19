#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 5;++i)
	{
		for(int j =1;j <= 5;++j)
		{
			if((j == i) || j == (5-i+1)) //(j == i) || i + j == 6
			{
				printf("*");
			}
			else
			{	
				printf(" ");
			}						//printf((j == i) || i + j == 6)?"*"":" ");
		}
		printf("\n");
	}
	return 0;
}
	

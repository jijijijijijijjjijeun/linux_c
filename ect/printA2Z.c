#include<stdio.h>

int main(void)
{
	char alphabet = 65; //char alphabet = 'A';

	while(alphabet <= 90) //alphabet <= 'B'
	{
		printf("%c",alphabet);
		
		++alphabet ;
	}
	
	printf("\n");
	return 0;
}

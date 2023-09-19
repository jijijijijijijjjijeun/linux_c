#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num[7];
	srand(time(NULL));
	for(int i = 0; i < 7; i++)
	{
		num[i] = rand() % 10 +1;
		
		for(int j = 0;j < 7 ;j++)
		{
			num[j]=num[i];
			if(num[i] == num[           1]) 
			{
				num[i] = rand() % 10 +1;
			}
		}
		
		printf(" %d\t",num[i]);
	}
	printf("\n");
	
	return 0;
}

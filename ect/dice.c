#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL)); //seed value
	for(int i = 0; i < 10 ; i++)
	{
		int num = rand() % 6 +1;
		
		printf("num%d : %d\n",i + 1,num);
	}
	
	//printf("\n");
		
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int lotto[7];
	
	srand(time(NULL));
	for(int i = 0; i < 7; i++)
	{
		lotto[i] = rand() % 45 +1;
		
		int  j;
		for( j = 0;j < i;j++)
		{
			if(lotto[i] == lotto[j]) 
			{
				break;;
			}
		}
		if(j == i)
		{
			++i;	
		}
		
		 
		//find value
		
		/*for(int j = 0;j < i;j++)
		{
			if(lotto[i] == lotto[j]) 
			{
				break;
			}
		}
		if(J < i
		continue;)*/
		
		
	}	
	for(int i = 0; i < 7; i++)
	{
		printf(" %d\t",lotto[i]);
	}
	printf("\n");
	
	return 0;
}

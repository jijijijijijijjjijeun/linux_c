#include <stdio.h>

int main(void)
{
	int first,second;
	for(int i = 1; i <=3; i++ )
	{
	while(first + second <11)
	{
		for(int j = 1; j <=2 ; j++)
		{
			printf("input score\n");
			printf("%d - %d\t",i,j);
			if(j == 1)
			{
				scanf("%d \n",&first);
			
			}
			
			else
			{
			printf("%d - %d\t",i,j);
				scanf("%d \n",&second);
				printf("total %d\n",first + second);
			}
		}
	}
	printf("error\n");
		
	}
	return 0;
}

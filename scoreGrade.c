#include<stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d",&score);
	
	if(score >= 90)
	{
		printf("%d is 'A'Grade\n",score);
	}
	else if(score >= 80)
	{
		printf("%d is 'B'Grade\n",score);
	}
	else if(score >= 70)
	{
		printf("%d is 'C'Grade\n",score);
	}	
	else if(score >= 60)
	{
		printf("%d is 'D'Grade\n",score);
	}	
	else
	{
		printf("%d is 'F'Grade\n",score);
	}
	return 0;
}

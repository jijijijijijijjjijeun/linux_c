#include <stdio.h>

int main(void)
{
	int scores[5];
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&scores[i]);
	}
	
	int sum = 0;
	
	for(int i = 0; i < 5; i++)
	{
		sum = sum + scores[i];
	}
	
	double avg = (double)sum / 5.0;
	printf("sum %d  average %.2f\n",sum, avg);
	
	return 0;
}

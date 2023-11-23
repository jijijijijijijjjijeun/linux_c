#include<stdio.h>

int main(void)
{
	//int sum = 0;
	long long sum = 0LL;
	
/*	int i = 1;
	while(i <= 1000000)
	{
		sum = sum + i;
		++i;
	}	*/
	
	int i = 1;
	while(i <= 1000000)
	{
		sum = sum + i + i + 1;
		i = i + 2;
	}	
	printf("sum[1,1000000] : %lld\n",sum);
	return 0;
}

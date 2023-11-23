#include<stdio.h>

int main(void)
{
	//int sum = 0;
	long long sum = 0LL;
	for(int i = 1; i <= 1000000 ; i+=2)
	{
		sum = sum + i + i + 1;
	} 
	printf("sum[1,1000000] : %lld\n",sum);
	return 0;
}

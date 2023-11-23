#include <stdio.h>

int gcd(int a, int b)
{
	while(b!=0)
	{
		int r = a % b;
		a = b;
		b =r;
	}
	return a;
}

int main(void)
{
	int a,b;
	int result;
	printf("input values     ");
	scanf("%d %d",&a,&b);
	result = gcd(a,b);
	printf("%d \n",result);
	
	return 0;
}

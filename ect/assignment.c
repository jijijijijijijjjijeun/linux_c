#include<stdio.h>

int main(void)
{
	int a, b, c;
	a = 100;
	b = a;
	c = a + b;
	
	printf("%d %d %d\n",a,b,c);
	
	//100 = a; x
	// a + b = c; x
	
	a = b = c = 100; // daisy-chain
	
	return 0;
}

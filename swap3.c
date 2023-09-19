#include <stdio.h>

int a;
int b;

void swap(void)
{
	int temp = a;
	a = b;
	b =temp;
}
int main(void)
{
	a = 100;
	b = 200 ;
	printf("a : %d\t b : %d\n",a,b);
	
	swap();
	
	printf("a : %d\t b : %d\n",a,b);
	return 0 ;
}

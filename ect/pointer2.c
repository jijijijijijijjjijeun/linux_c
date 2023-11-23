#include <stdio.h>

int main(void)
{
	int *p;
	p = NULL;
	int num;
	int nums[5];
	p = &num;
	*p = 100;
	
	p = &nums[2];
	*p = 200;
	
	printf("*p : %d\n",*p);
	return 0;
}

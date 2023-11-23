#include<stdio.h>

int main(void)
{

	int num;
	printf("input number       ");
	scanf("%d",&num);
		
	int isodd = (num % 2 == 1);
	
	printf("====>   %d\n",isodd);
	printf("0 : even,   1 : odd\n");
		
		
			
	return 0;
}

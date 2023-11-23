#include<stdio.h>

int main(void)
{

	int num;
	printf("input number       ");
	scanf("%d",&num);
		
	//int isodd = (num % 2 == 1);
	
	//printf("====>   %d\n",isodd);
	//printf("0 : even,   1 : odd\n");
	/*	
	if(num % 2 == 1) // num % 2
	{
		printf("%d is a odd\n",num);
	}
	else
	{
		printf("%d is a even\n",num);
	}
	*/
	
	printf("%d is a %s\n",num,(num % 2) ? "odd" : "even");

	return 0;
}

#include<stdio.h>

int main(void)
{
	int num1,num2,num3;
	printf("input three values :");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	int max,mid,min;
	
	
	if(num1 > num2)
	{
		if(num3 > num1)
		{
			max = num3;
			mid = num1;
			min = num2;
		}
		else if(num3 < num2)
		{
			max = num1;
			mid = num2;
			min = num3;
		}
		else
		{
			max = num1;
			mid = num3;
			min = num2;
		}
	}
	else
	{
		if(num3 > num2)
		{
			max = num3;
			mid = num2;
			min = num1;
		}
		else if(num3 < num1)
		{
			max = num2;
			mid = num1;
			min = num3;
		}
		else
		{
			max = num2;
			mid = num3;
			min = num1;
		}
	}
	printf("max: %d, mid: %d, min: %d\n",max,mid,min);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int year;
	
	printf("input year");
	scanf("%d",&year);
	
	//int isleap;
	//isleap = ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0);
	//isleap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ));
	
	//printf("%d is leap : %d\n",year,isleap);
	//printf("1 ===> leapyear\n");
	
	if((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0)
	{
		printf("%d is leap  \n",year);
	}
	else
	{
		printf("%d is ordinary  \n",year);
	}
	return 0;
}

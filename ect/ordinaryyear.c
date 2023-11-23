#include<stdio.h>

int main(void)
{
	int year;
	
	printf("input year");
	scanf("%d",&year);
	
	//int isordinary = !((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0);
	
	int isordinary = year % 4 != 0 || year % 100 == 0 && year % 400 != 0;
	
	
	printf("%d is ordinary : %d\n",year,isordinary);
	
	printf("1 ===> leapyear\n");
	
	return 0;
}

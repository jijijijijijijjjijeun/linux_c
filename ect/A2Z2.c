#include<stdio.h>

int main(void)
{
	//int code;
	//printf("asc code\n");
	//scanf("%d",&code);
	char c;
	printf("input char :");
	scanf("%c",&c);
	
	//printf("%c \n",c);
	
	int isTrue = (c >= 'A' && c <= 'Z');
	
	printf("%c is a biger letter : %d \n",c,isTrue);
	
	return 0;
}

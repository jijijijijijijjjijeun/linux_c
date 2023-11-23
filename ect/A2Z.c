#include<stdio.h>

int main(void)
{
	int code;
	printf("asc code\n");
	scanf("%d",&code);
	
	int isTrue = code >= 'A' && code <= 'Z'; //A =65 z =90
	printf("code : %d ---- Big Letter ASC code : %d\n",code,isTrue);
	return 0;
}

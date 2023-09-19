#include <stdio.h>
//#include <string.h>
#include "string.h"


int main(void)
{
	char *str1 = "hello";
	char str2[6];
		
	printf("str1 len : %d\n", my_strlen(str1)); //trlen(str1) =5
	//str2 = str1
	
	my_strcpy(str2,str1);
	printf("str2 : %s\n",str2);
	
	//str1 == str2 //smae address??
	
	if(my_strcmp(str1,str2) == 0)
	{
		printf("str1 and str2 are equal\n");
	}
	else
	{
		printf("str1 and str2 are not equal\n");
	}
	
	char *title = "just the way are";
	char *singer = "billy joel";
	char result[100];
	my_strcpy(result,title);
	my_strcat(result," - "); //concatenation
	my_strcat(result,singer);
	
	printf("result: %s\n",result);

	return 0;
}

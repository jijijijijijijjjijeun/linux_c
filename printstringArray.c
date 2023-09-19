#include <stdio.h>

void printstringArrary1(char(*arr)[20],int size)
{
	for(int i =0; i < size ;++i)
	{
		printf("%s\n",&arr[i][0]);  //arr[i]
	}
}
void printstringArrary2(char **arr,int size)
{
	for(int i =0; i < size ; ++i)
	{
		printf("%s\n",arr[i]);  
	} // &arr[i][0]
}

int main(void)
{
	char cities1[][20] = 
	{
		"seoul","Los Angeles","Rio janeoro","Moscow","Paris"
	};
	printstringArrary1(cities1,5);
	char *cities2[] =
	{
		"seoul","Los Angeles","Rio janeoro","Moscow","Paris"
	};
	printstringArrary2(cities2,5);
	
	return 0;
}

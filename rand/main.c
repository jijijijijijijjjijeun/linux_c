#include <stdio.h>
#include <time.h>
#include "rand.h"

void my_srand(int  );  //function declaration
int my_rand(void);

int main(void)
{	
	my_srand(time(NULL));

	for(int i = 1;i <=10; ++i)
	{
		int num = my_rand();
		printf("num : %d\n",num);
	}
	
	return 0;
}



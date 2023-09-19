#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[5];
	
	srand(time(NULL));
	question[0] = rand() % 9 + 1;
	question[3] = question[0];
	question[1] = rand() % 9 + 1;
	while(question[0] == question[1])
	{
		question[1] = rand() % 9 + 1;
	}
	question[4] = question[1];
	question[2] = rand() % 9 + 1;	
	while(question[2] == question[1] || question[2] == question[0])
	{
		question[2] = rand() % 9 + 1;
	}
	question[5] = question[2];
	printf("%d %d %d\n",question[0],question[1],question[2]);
	
	int strike = 0;
	int ball = 0;
	int count = 0;
	
	while(strike != 3)
	{
		strike = 0;
		ball = 0;
		count ++;
		int answer[3];
		printf("input answer\n");
		scanf("%d %d %d",&answer[0],&answer[1],&answer[2]);	
		
		for(int i = 0; i < 3 ; ++i)
		{
			if(question[i] == answer[i])
			{
				strike ++;
			}
			if(answer[i] == question[i+1]||answer[i] == question[i+2]) 
			{ 
				ball ++;
			}
		}
		printf("%d STRIKE  %d BALL \n",strike,ball);
	}
	printf("your count : %d\n",count);
	return 0;
}

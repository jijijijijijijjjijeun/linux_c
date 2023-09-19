#include <stdio.h>

int main(void)
{
	int frameScores[11] = {0,}; //1~10 => 11

	//1~9 frame
	int scores[10][3]= {0,};
	for(int i = 1; i <=9; ++i)
	{
		//1st cast
		printf("%d frame 1st cast :",i);
		scanf("%d",&scores[i][1]);
		if(i >= 2 && scores[i-1][1]+scores[i-1][2] == 10 && scores[i-1][1] != 10) //spare
		{
			int bouns = + scores[i][1];
			frameScores[i -1] = frameScores[i -2] + 10 + bouns;
			printf("-------------------------------------\n");
			printf("\t\t%d frame Score = %d\n",i-1,frameScores[i-1]);
			printf("-------------------------------------\n");
		}
		
		else if(i >=3 && scores[i-2][1] == 10 && scores[i-1][1] == 10)
		{
			int bouns = scores[i-1][1] + scores[i][1];
			frameScores[i-2] = frameScores[i-3] + 10 + bouns;
			printf("-------------------------------------\n");
			printf("\t\t%d frame Score = %d\n",i-2,frameScores[i-2]);
			printf("-------------------------------------\n");
		}
		//2nd cast
		if(scores[i][1] != 10)
		{
			printf("%d frame 2nd cast :",i);
			scanf("%d",&scores[i][2]);
			
			if(i >= 2 && scores[i-1][1] == 10)
			{
				int bouns = scores[i][1] + scores[i][2];
				frameScores[i-1] = frameScores[i-2] + 10 + bouns;
				printf("-------------------------------------\n");
				printf("\t\t%d frame Score = %d\n",i-1,frameScores[i-1]);
				printf("-------------------------------------\n");
			}
			if(scores[i][1] + scores[i][2] < 10)
			{
				frameScores[i] = frameScores[i-1] + scores[i][1]+scores[i][2];
				printf("-------------------------------------\n");
				printf("\t\t%d frame Score = %d\n",i,frameScores[i]);
				printf("-------------------------------------\n");
			}
		}
		
	//calculate score	
	
	}
	
	//10frame
	int scores10[4] = {0 ,};
	printf("%d frame 1st cast :",10);
	scanf("%d",&scores10[1]);
	if(scores[9][1]+scores[9][2] == 10&& scores[9][1]!=10)
	{
		frameScores[9] = frameScores[8] + 10 +scores10[1];
		printf("-------------------------------------\n");
		printf("\t\t%d frame Score = %d\n",9,frameScores[9]);
		printf("-------------------------------------\n");
	}
	else if(scores[8][1] == 10 && scores[9][1] == 10)
	{
		frameScores[8] = frameScores[7] + 10 +scores[9][1] + scores10[1];
		printf("-------------------------------------\n");
		printf("\t\t%d frame Score = %d\n",8,frameScores[8]);
		printf("-------------------------------------\n");
	}
	
	printf("%d frame 2nd cast :",10);
	scanf("%d",&scores10[2]);
	
	if(scores[9][1] == 10)
	{
		frameScores[9] = frameScores[8] + 10 +scores10[1] + scores10[2];
		printf("-------------------------------------\n");
		printf("\t\t%d frame Score = %d\n",9,frameScores[9]);
		printf("-------------------------------------\n");
	}
	if(scores10[1] + scores10[2] < 10)
	{
		frameScores[10] = frameScores[9] + scores10[1] + scores10[2] ;
		printf("-------------------------------------\n");
		printf("\t\t%d frame Score = %d\n",10,frameScores[10]);
		printf("-------------------------------------\n");
	}
	else
	{
		printf("%d frame 3rd cast :",10);
		scanf("%d",&scores10[3]);
	
		frameScores[10] = frameScores[9] + scores10[1] + scores10[2] + scores10[3];
		printf("-------------------------------------\n");
		printf("\t\t%d frame Score = %d\n",10,frameScores[10]);
		printf("-------------------------------------\n"); // 10 frame  => frameScore[9] = 0
	}
	return 0;
}

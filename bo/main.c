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
	int total;
	//10frame
	int score10[4] = {0 ,};
	//1st cast
	printf("10 frame 1st cast :");
	scanf("%d",&score10[1]);
	//score
	total = frameScores[9] + score10[1];
	//2nd cast
	printf("10 frame 2nd cast :");
	scanf("%d",&score10[2]);
	//score
	total = total + score10[2];
	if(scores[8][1]==10 && scores[9][1]==10 && (score10[1] +score10[2] <10))  
	{
		total = frameScores[7] + score10[1]+score10[2] 
				+10+score10[1]+score10[2] + 20 +score10[1] ;
	}
	if(scores[8][1]==10 && (scores[9][1]+scores[9][2]==10) )
	{
		total = frameScores[7] + score10[1]+score10[2] 
				+10+score10[1]+ 20  ;
	}
	
	if((scores[8][1]+scores[8][2]==10) && scores[9][1] == 10)
	{
		total = frameScores[7] + 20 + 10 +score10[1]
				+score10[2] +score10[1]+score10[2] ;
	}
	
	
	//3rd cast ? 1st cast + 2nd cast >= 10
	if(score10[1] + score10[2] >= 10)
	{
		printf("10 frame 3rd cast :");
		scanf("%d",&score10[3]);
		//score
		if(scores[8][1]==10 && (scores[9][1]+scores[9][2]==10) 
			&& (score10[1] +score10[2] ==20))
		{
			total = frameScores[7] + score10[1]+score10[2] 
					+score10[1]+50;
		}
		if(scores[8][1]==10 && (scores[9][1]+scores[9][2]==10) 
			&& (score10[1] +score10[2] ==10))
		{
			total = frameScores[7] + score10[1]+score10[2] 
					 + 10 + score10[1] + 20;
		}
		if((scores[8][1]+scores[8][2]==10)  && (scores[9][1]+scores[9][2]==10))
		{
			total = frameScores[7] + score10[1]+score10[2] + 19 + 20;
		}
		total = total + score10[3];
	}
	printf("-------------------------------------\n");
	printf("\t\t10 frame Score = %d\n",total);
	printf("-------------------------------------\n");
	return 0;
}

#include <stdio.h>
#include "board.h"

int main (void)
{
	int frameScores[10] = {0, };
	int scores[11][3] = {0, };
	int bouns ; //10 frame third cast
	
	printBoard();
	
	for(int i = 1; i <= 10 ; ++i)
	{
		//1st cast
		printf("%d frame 1st cast :",i);
		scanf("%d",&scores[i][1]);
		setScore(i,1,scores[i][1]);
		printBoard();
		//score
		if(i >=2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] !=10)
		{
			frameScores[i-1] = frameScores[i-2] + 10 +scores[i][1];
			//printf("\t\t%d frame Score = %d\n",i-1,frameScores[i-1]);
			setFrameScore(i-1,frameScores[i-1]);
			printBoard();
		}
		else if(i >=3 && scores[i-2][1]==10 && scores[i-1][1] ==10)
		{
			frameScores[i-2] = frameScores[i-3] + 10 +scores[i-1][1] +scores[i][1];
			//printf("\t\t%d frame Score = %d\n",i-2,frameScores[i-2]);
			setFrameScore(i-2,frameScores[i-2]);
			printBoard();
		}
		//2nd cast ( 1~9 frame : != 10, 10 frame : must be)
		if(scores[i][1] < 10 || i == 10)
		{
			printf("%d frame 2nd cast :",i);
			scanf("%d",&scores[i][2]);
			setScore(i,2,scores[i][2]);
			printBoard();
			
			if(scores[i-1][1] == 10)
			{
				frameScores[i-1] = frameScores[i-2] + 10 +scores[i][1] +scores[i][2];
				//printf("\t\t%d frame Score = %d\n",i-1,frameScores[i-1]);
				setFrameScore(i-1,frameScores[i-1]);
				printBoard();
			}
			if(scores[i][1] + scores[i][2] < 10)
			{
				frameScores[i] = frameScores[i-1] +scores[i][1] +scores[i][2];
				//printf("\t\t%d frame Score = %d\n",i,frameScores[i]);
				setFrameScore(i,frameScores[i]);
				printBoard();
			}
		}
	
		if( i == 10 && scores[i][1] + scores[i][2] >=10)
		{
			printf("%d frame 3rd cast :",i);
			scanf("%d",&bouns);
			setScore(i,3,bouns);
			printBoard();
			
			frameScores[i] = frameScores[i-1] +scores[i][1] +scores[i][2] + bouns;
			//printf("\t\t%d frame Score = %d\n",i,frameScores[i]);
			setFrameScore(i,frameScores[i]);
			printBoard();
		}
	}

	return 0;	
}
		

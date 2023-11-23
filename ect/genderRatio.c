#include <stdio.h>

int main(void)
{
	int man;
	int woman;
	
	printf("input man\n");
	scanf("%d",&man);
	printf("input woman\n");
	scanf("%d",&woman);
	
	//doouble man,woman;
	
	double sum = man + woman;
	
	double manRatio = (man/sum) * 100;
	//double manRatio = 1.0 * man/sum * 100;
	double womanRatio = (woman/sum) * 100;
	//manRatio = 100.0 * (man/sum);
	
	printf("manRatio = %.2f%% \twomanRatio= %.2f%%\n",manRatio,womanRatio);
	return 0;

}

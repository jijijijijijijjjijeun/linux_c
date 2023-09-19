#include <stdio.h>

int main(void)
{
	//int == 100;
	int nums[10] = { 50, 30, 100, 10, 20, 60, 40, 70, 90, 80}; //initialized list
	int max=nums[0];
	for(int i = 1; i < 10; i++)
	{	
		if(max < nums[i])
		{
			max = nums[i];
		}
		/*else
		{
			max = max;
		}*/
	}
	
	printf("max : %d \n",max);
	return 0;
}

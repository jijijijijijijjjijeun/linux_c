#include <stdio.h>
#define BOLD   (0x01 << 0)
#define ITALIC (0x01 << 1)
#define SHADOW (0x01 << 2)
#define UL     (0x01 << 3)
int main(void)
{
	unsigned char attr;
	
	attr = attr^attr;  // attr = 0
	//attr = attr | 0x01; 
	printf("attr : 0x%.2x\n",attr);
	
	attr = attr | BOLD; 
	//attr = attr | (0x04 + 0x02); 
	printf("attr : 0x%.2x\n",attr);
	
	attr = attr | (SHADOW+ ITALIC); 
	//attr = attr & (~0x01);
	printf("attr : 0x%.2x\n",attr);
	
	attr = attr & (~BOLD); 
	
	printf("attr : 0x%.2x\n",attr);

	return 0;
}

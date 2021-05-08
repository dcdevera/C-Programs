#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(void)
{
	int heads = 0;
	int tails = 0;
	int i;
	int x = 0;
	
	for(i = 0;i < 10000;i++)
	{
		x = (rand() % 2) + 1;
		
		switch(x)
		{
			case 1:
				heads++;
				break;
			case 2:
				tails++;
				break;
		}	
	}
	printf("heads = %d \n",heads);
	printf("tails = %d \n",tails);
}

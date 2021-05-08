#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(void)
{
	int x = 0;
	int i;
	double z;
	
	for(i = 0;i < 11;i++)
	{
		x = x + 2;
		z = x / 20;
	}
	
	printf("decimal value of x / 20 \n");
	printf("%.03f \n",z);
	printf("final value of x \n");
	printf("%d \n",x);
}

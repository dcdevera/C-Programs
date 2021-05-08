#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void main(void)
{
	int array[2][5][100] = {0};
	int i;
	int j;
	int k;
	int a;
	int b;
	int c;
	for(i = 0;i < 2;i++)
	{
		for(j = 0; j < 5;j++)
		{
			for(k = 0; k < 100;k++)
			{
				array[i][j][k] = (rand() % 10) + 1;
			}
		}
	}
	
	for(a = 0;a < 2;a++)
	{
		for(b = 0;b < 5;b++)
		{
			for(c = 0;c < 100;c++)
			{
				printf("Array %d,%d,%d equals: %d \n",a,b,c,array[a][b][c]);
			}
		}
	}
	
}

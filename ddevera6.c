/*
Darren De Vera
csc-251
9/24/18
Lab #6
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 5

void main(void)
{
	int arrayOdd[SIZE] = {1,3,5,7,9};
	int arrayEven[SIZE] = {0,2,4,6,8};
	int i;
	size_t z;
	int hold = 0;
	int pass;
	
	printf("Before swap \n");

	for(i = 0;i < SIZE;i++)
	{
		printf("arrayEven[%d] = %d \n",i,arrayEven[i]);
	}
	for(i = 0;i < SIZE;i++)
	{
		printf("arrayOdd[%d] = %d \n",i,arrayOdd[i]);
	}
	
	for(pass = 0;pass < SIZE;pass++)
	{
		for(z = 0;z < SIZE - 1;z++)
		{
			hold = arrayOdd[z];
			arrayOdd[z] = arrayEven[z];
			arrayEven[z] = hold;
		}
	}
	
	printf("After swap \n");

	for(i = 0;i < SIZE;i++)
	{
		printf("arrayEven[%d] = %d \n",i,arrayEven[i]);
	}
	for(i = 0;i < SIZE;i++)
	{
		printf("arrayOdd[%d] = %d \n",i,arrayOdd[i]);
	}
}

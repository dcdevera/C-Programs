/*
Darren De Vera
csc-251
9/24/18
Lab #6
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int z,a = 0;
	int pass;
	size_t i;
	int hold;
	int t[SIZE]={4,3,2,6,9,7,8,1,5};
	puts("before swap \n");

	for(z = 0;z < SIZE;z++)
	{
		printf("t[%d]= %d \n",z,t[z]);
	}
	for(pass = 0;pass < SIZE;pass++)
	{
		for(i = 0;i < SIZE - 1;i++)
		{
			if(t[i] > t[i +1])
			{
				hold = t[i];
				t[i] = t[i + 1];
				t[i + 1] = hold;
			}
		}
	}
	puts("after swap \n");
	for(z = 0;z < SIZE;z++)
	{
		printf("t[%d]= %d \n",z,t[z]);
	}
}

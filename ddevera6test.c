/*
Darren De Vera
csc-251
9/17/18
Lab 6
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

int prompt(void);
int rolls(void);
void printer(int x);

int main(void)
{
	int Array[5];
	int i;

	for(i = 0;i < 5;i++)
	{
		Array[i] = 0;
		printf("%d \n",Array[i]);
	}

	for(i = 0;i < 5;i++)
	{
		Array[i] = Array[i] + 10;
		printf("%d \n",Array[i]);
	}
	
	
	

}


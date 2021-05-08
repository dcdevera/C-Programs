/*
Darren De Vera
csc-251
10/10/18
Lab #8
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void randomFill(int *ptr1, int size);
void sorter(int *ptr, int size);
void printer(int *array, int size);

void main(void)
{
	srand(time(NULL));
	int *ptr;
	int array[30] = {0};
	ptr = array;
	
	printf("Before fill \n");
	printer(ptr,30);
	randomFill(ptr,30);
	printf("Before sort \n");
	printer(ptr,30);
	printf("After sort \n");
	sorter(ptr,30);
	printer(ptr,30);
}

void randomFill(int *ptr1, int size)
{
	int i;
	int r;
	for(i = 0;i < size;i++)
	{
		r = (rand() % 205 - 55 + 1) + 55;
		*ptr1 = r;
		ptr1++;
	}
}

void sorter(int *ptr, int size)
{
	int i;
	int j;
	int hold;
	for(i = 0;i < size;i++)
	{
		for(j = 0;j < size;j++)
		{
			if(*(ptr+i) < *(ptr+j))
			{
				hold = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = hold;
				
			}
		}
	}
}

void printer(int *array, int size)
{
	int i;
	
	for(i = 0;i < size;i++)
	{
		printf("Array[%d] = %d \n",i,*array);
		array++;
	}
}

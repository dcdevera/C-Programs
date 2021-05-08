#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void insertA(int *ptr1 ,int *ptr2, int size);
void swapArray(int *ptr1, int *ptr2, int size);
void printer(int *array, int size);
void printSwap(int *array, int *array2, int size);

void main(void)
{
	int *ptr;
	int *ptr2;
	int a,b,c = 9;
	int array[4] = {0};
	int array2[4] = {0};
	ptr = &c;
	*ptr = 6;
	*ptr = 7;
	ptr = array;
	ptr2 = array2;
	ptr = &array[0];
	ptr2 = &array[0];
	insertA(ptr,ptr2,4);
	
/*
	printf("%p \n",ptr);
	printf("%d \n",*ptr);
	printf("%p \n",&ptr);
*/
	puts("Before swap. \n");
	printer(array,4);
	printer(array2,4);
	puts("After swap. \n");
	swapArray(array2,array,4);
/*
	printSwap(array,array2,4);
*/
}

void insertA(int *ptr1, int *ptr2, int size)
{
	int i;
	
	for(i = 0;i < size;i++)
	{
		*ptr1 = 2;
		ptr1++;
		*ptr1++;
	}
	for(i = 0; i < size;i++)
	{
		*ptr2 = 5;
		*ptr2++;
	}
}

void swapArray(int *ptr1, int *ptr2, int size)
{
	int i;
	size_t z;
	int hold = 0;
	
	for(i = 0;i < size;i++)
	{
		hold = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = hold;
	}
	for(i = 0;i < size;i++)
	{
		printf("%d %p \n",*ptr1,ptr1);
		ptr1++;
	}
	for(i = 0;i < size;i++)
	{
		printf("%d %p \n",*ptr2,ptr2);
		ptr2++;
	}
}

void printer(int *array, int size)
{
	int i;
	
	for(i = 0;i < size;i++)
	{
		printf("%d %p \n",*array,array);
		array++;
	}
}

void printSwap(int *array, int *array2, int size)
{
	int i;
	
	for(i = 0;i < size;i++)
	{
		printf("%d %p \n",*array,array);
		array++;
	}
	for(i = 0;i < size;i++)
	{
		printf("%d %p \n",*array2,array2);
		array2++;
	}
}

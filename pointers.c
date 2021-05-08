#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void insertA(int *ptr1, int *ptr2, int size);
void swap(int *ptr1, int *ptr2, int size);
void printer(int *array, int size);

void main(void)
{
	int *ptr;
	int *ptr2;
	int array[4] = {0};
	int array2[4] = {0};
	ptr = array;
	ptr2 = array2;
	ptr = &array[0];
	ptr2 = &array2[0];
	
	insertA(ptr,ptr2,4);
	puts("Before \n");
	printer(ptr,4);
	printer(ptr2,4);

	swap(ptr,ptr2,4);
	puts("after \n");
	printer(ptr,4);
	printer(ptr2,4);
}

void insertA(int *ptr1, int *ptr2, int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		*ptr1 = 2;
		ptr1++;
	}
	for(i = 0;i < size;i++)
	{
		*ptr2 = 5;
		ptr2++;
	}
}

void swap(int *ptr1, int *ptr2, int size)
{
	int i;
	int hold;
	for(i = 0;i < size;i++)
	{
		hold = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = hold;
		ptr1++;
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

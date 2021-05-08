#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void insertA(int *ptr1, int size);
void sort(int *ptr, int size);
void printer(int *array, int size);

void main(void)
{
	int *ptr;
	int array[4] = {0};
	ptr = array;
	
	insertA(ptr,4);
	printf("Before sort \n");
	printer(ptr,4);
	printf("After sort \n");
	sort(ptr,4);
	printer(ptr,4);
}

void insertA(int *ptr1, int size)
{
	int i;
	int r;
	srand(time(NULL));
	for(i = 0;i < size;i++)
	{
		r = (rand() % 10) + 1;
		*ptr1 = r;
		ptr1++;
	}
}

void sort(int *ptr, int size)
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
		printf("%d %p \n",*array,array);
		array++;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void randomFill(int *ptr1, int size);
void printer(int *array, int size);
void otherPrint(int *array, int size);

void main(void)
{
	int *ptr;
	int array[20] = {0};
	ptr = array;
	srand(time(NULL));
	printf("Full array output \n");
	randomFill(ptr,20);
	printer(ptr,20);
	printf("Output Every Other Value \n");
	otherPrint(ptr,20);	
}

void randomFill(int *ptr1, int size)
{
	int i;
	int r;
	for(i = 0;i < size;i++)
	{
		r = (rand() % 226 - 77 + 1) + 77;
		*ptr1 = r;
		ptr1++;
	}
}

void printer(int *array, int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		printf("arrayOne[%d] = %d \n",i,*array);
		array++;
	}
}

void otherPrint(int *array, int size)
{
	int i;
	for(i = 0;i < size;i = i + 2)
	{
		printf("arrayOne[%d] = %d \n",i,*(array+i));
		array+i;
	}
}

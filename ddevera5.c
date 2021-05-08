/*
Darren De Vera
csc-251
9/17/18
Lab #5
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int rollNum(void);
int ranRoll(int a);

int main(void)
{
	int x = 0;
	int y;
	
	x = rollNum();
	y = ranRoll(x);
}

int rollNum(void)
{
	int a = 0;
	printf("How many times would you like to roll the ten sided die? \n");
	scanf("%d",&a);
	return a;
}

int ranRoll(int a)
{
	int i;
	int count = 0;
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;
	int seven = 0;
	int eight = 0;
	int nine = 0;
	int ten = 0;

	for(i = 0; i < a; i++)
	{
		count = (rand() % 10) + 1;
		switch(count)
		{
			case 1:
				one++;
			case 2:
				two++;
			case 3:
				three++;
			case 4:
				four++;
			case 5:
				five++;
			case 6:
				six++;
			case 7:
				seven++;
			case 8:
				eight++;
			case 9:
				nine++;
			case 10:
				ten++;
		}
	
	}

}

int resRoll(int b)
{
	int c;
	c = ranRoll(b);
	
}

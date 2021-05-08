#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#define SIZE 20

void lower(char string[]);
void upper(char string[]);
int aeiou(char string[]);
void timesTwelve(int sum);

void main(void)
{
	int i;
	int x;
	int choice;
	char string[SIZE] = {'\0'};
	printf("Please enter a string that is less than 20 characters: \n");
	fgets(string,SIZE,stdin);
	lower(string);
	puts("");
	upper(string);
	puts("");
	x = aeiou(string);
	puts("");
	timesTwelve(x);
	
}

void lower(char string[])
{
	int i;
	printf("Lowercase letters: \n");
	for(i = 0;i < SIZE;i++)
	{
		if(islower(string[i]))
		{
			printf("%c ",string[i]);
		}
	}
}

void upper(char string[])
{
	int i;
	printf("Uppercase letters: \n");
	for(i = 0;i < SIZE;i++)
	{
		if(isupper(string[i]))
		{
			printf("%c ",string[i]);
		}
	}
}

int aeiou(char string[])
{
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int y = 0;
	int z;
	int sum = 0;
	for(z = 0;z < SIZE;z++)
	{
		switch(string[z])
		{	
			case 'a':
			{	
				a++;
				break;
			}
			case 'A':
			{
				a++;
				break;
			}
			case 'e':
			{
				e++;
				break;
			}
			case 'E':
			{
				e++;
				break;
			}
			case 'i':
			{
				i++;
				break;
			}
			case 'I':
			{
				i++;
				break;
			}
			case 'o':
			{
				o++;
				break;
			}
			case 'O':
			{
				o++;
				break;
			}
			case 'u':
			{
				u++;
				break;
			}
			case 'U':
			{
				u++;
				break;
			}
			case 'y':
			{
				y++;
				break;
			}
			case 'Y':
			{
				y++;
				break;
			}
			default:
			{
				break;
			}
		}
	}
	sum = a + e + i + o + u + y;
	printf("Number of Vowels: \n");
	printf("%d \n",sum);
	return sum;
}

void timesTwelve(int sum)
{
	int product = 0;
	product = sum * 12;
	printf("%d x 12 = %d \n",sum,product);
}
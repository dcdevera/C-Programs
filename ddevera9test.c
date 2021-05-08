#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#define SIZE 10

void main(void)
{
	int z,a = 0;
	char c = 't';
	char g[20] = "hello world";
	char h[20] = {'h','e','l','l','o','\0'};
	printf("g = %s \n",g);
	int i;
	double x;
	const char *string = "51.2% are admitted";
	char *stringPtr;

	for(i = 0;i < 20;i++)
	{
		printf("%c",h[i]);
	}
	puts("");
	
	puts("Enter a string with only letters and no spaces less than 19");
	scanf("%s",g);
	
	for(i = 0;i < 20;i++)
	{
		if(isalpha(g[i]))
		{
			printf("%c",g[i]);
		}
		else if(!isdigit(g[i]))
		{
			printf("%c = not a letter \n",g[i]);
		}
		else
		{
			printf("bad \n");
		}
	}

	printf("%s\n",g);
	x = strtod(string,&stringPtr);
	printf("the string %s is converted to the \n",string);
	printf("double value %.2f and the string %s \n",x,stringPtr);
	
	puts("enter another string");
	fgets(g,20,stdin);
	puts(g);
	
}

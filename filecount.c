#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(int argc, char *argv[])
{
	FILE *inptr;
	FILE *inptr2;
	char count[256] = {0};
	char count2[256] = {0};
	char line[256] = {0};
	int k;
	inptr = fopen(argv[0],"r");
	inptr2 = fopen(argv[1],"r");
	int c1 = 0;
	int c2 = 0;
	if(argc != 3)
	{
		puts("Need three arguments.");
	}
	else
	{
		printf("First argument = %s, second argument = %s\n",argv[0], argv[1],argv[2]);
		inptr = fopen(argv[1],"r");
		printf("string is %s\n", line);

		while(!feof(inptr))
		{
			for(k=0;k < 256;k++)
			{
				fscanf("%c",count);
				c1++;
			}
		}
		while(!feof(inptr2))
		{
			for(k=0;k < 256;k++)
			{
				fscanf("%c",count2);
				c2++;
			}
		}
		printf("%d",c1);
		
	}
}

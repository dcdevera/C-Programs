#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(int argc, char *argv[])
{
	FILE *inptr;
	FILE *outptr;
	char line[256] = "$6$salt$hashed password";
	char letter;
	int count1 = 0;
	int count2 = 0;
	int c;
	if(argc != 3)
	{
		puts("wrong! Need three arguments.");

	}
	else
	{
		printf("First argument = %s, second argument = %s\n",argv[0], argv[1],argv[2]);
		inptr = fopen(argv[1],"r");
		printf("string is %s\n", line);

		if((inptr = fopen(argv[1],"r")) != NULL)
		{	
			while((c = fgetc(inptr)) != EOF)
			{
				count1++;
			}
			
		}
		if((inptr = fopen(argv[2],"r")) != NULL)
		{
			while((c = fgetc(inptr)) != EOF)
			{
				count2++;
			}
		}
		if(count1 > count2)
		{
			printf("%d > %d \n",count1,count2);
		}
		else if(count2 > count1)
		{
			printf("%d > %d \n",count2,count1);
		}
	}
	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 10

void main(int argc, char *argv[])
{
	int i;
	int x;
	char string[SIZE] = {'\0'};
	FILE *rptr;
	FILE *wptr;
	wptr = fopen("outfile.txt","w");
	if(argc != 3)
	{
		printf("Please enter 3 arguments!\n");
	}
	else
	{
		rptr = fopen("infile.txt","r");
		fscanf(rptr,"%c",string);
	
			for(i = 0;i < SIZE;i++)
			{
				if(islower(string[i]))
				{
					string[i] = toupper(string[i]);
					fprintf(wptr,"%s",string);
					puts("Changing to lower");
				}
				else if(isupper(string[i]))
				{
					string[i] = tolower(string[i]);
					fprintf(wptr,"%s",string);
					puts("Changing to upper");
				}	
			}
	
		rewind(rptr);
	}
	fclose(rptr);
	fclose(wptr);
}

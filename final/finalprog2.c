#include <stdlib.h>
#include <stdio.h>
#define SIZE 50

void main(int argc, char argv[])
{
	FILE *infile;
	FILE *outfile;
	int i;
	char word[SIZE] = {'\0'};
	infile = fopen(*argv,"a");
	outfile = fopen(*argv,"w");
	if(argc != 3)
	{
		puts("Please specify the you want and the name of new file");
	}
	else
	{
		if(infile == NULL)
		{
			puts("File empty, try another file");
		}
		else
		{
			fscanf(infile,"%s",word);
			for(i = 0;i < 1;i++)
			{
				if(islower(word[i]))
				{
					word[i] = toupper(word[i]);
					fprintf(outfile,"%s \n",word);
					break;
				}
			}
		}
	}
	fclose(infile);
	fclose(outfile);
}

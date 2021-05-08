#include <stdlib.h>
#include <stdio.h>
#define SIZE 50
void main(int argc, char *argv[])
{
	FILE *infile;
	FILE *outfile;
	char word[SIZE] = {'\0'};
	int i;

	puts("enter wordlist to use: ");
	scanf(*argv,infile);
	infile = fopen("dictionary.txt","r");
	outfile = fopen("wordlist.txt","w");
	if(infile == NULL)
	{
		puts("File empty. Choose another file.");
	}
	else
	{
		fscanf(infile,"%s",word);
		while(!feof(infile))
		{
			for(i = 1;i < 6;i++)
			fprintf(outfile,"%s%d \n",word,i);
			break;
		}
		puts("Wordlist modified to file");
	}
	fclose(infile);
	fclose(outfile);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 256

void main(int argc, char *argv[])
{
	FILE *infile;
	FILE *outfile;
	int choice;
	int i;
	int j;
	char string[SIZE] = {'\0'};
	outfile = fopen("outfile.txt","w");
	if(argc != 3)
	{
		printf("Please run program with other two arguments! \n");
	}
	else
	{
		infile = fopen(argv[1],"r");
		fscanf(infile,"%s",string);
		printf("Choose an option below to modify your wordlist \n");
		printf("1. Change the first letter to a captial letter. \n");
		printf("2. Make each word lowercase\n");
		printf("3. Make each word uppercase\n");
		printf("4. Duplicate each word 10 times and display the word with it's duplicate # after it.\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				if(!feof(infile))
					{
					if(islower(string[0]))
					{
						string[0] = toupper(string[0]);
					}
					fprintf(outfile,"%s",string);
				}
				printf("Wordlist complete. Check output.txt for results.\n");
				break;
				
			}	
			case 2:
			{
				if(!feof(infile))
				{
					for(i = 0;i < SIZE;i++)
					{
						if(islower(string[i]))
						{
							string[i] = toupper(string[i]);	
						}	
					}
				
				}
				fprintf(outfile,"%s",string);
				printf("Wordlist complete. Check output.txt for results.\n");
				break;
			}
			case 3:
			{
				if(!feof(infile))
				{
					for(i = 0;i < SIZE;i++)
					{
						if(isupper(string[i]))
						{
							string[i] = tolower(string[i]);	
						}	
					}
				}
				fprintf(outfile,"%s",string);
				printf("Wordlist complete. Check output.txt for results.\n");
				break;
			}
			case 4:
			{
				if(!feof(infile))
				{
					for(j = 0;j < 10;j++)
					{
						fprintf(outfile,"%s %d",string,j);
					}
				
				}
				printf("Wordlist complete. Check output.txt for results.\n");
				break;
			}
			default:
			{
				printf("Not an option. Try again. \n");
				break;
			}
		}
	}
}

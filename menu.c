#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#define SIZE 20
int main(void)
{
	char string[SIZE] = {'\0'};
	
	int i;
	int c;
	int choice;
	printf("Enter a String that is less than 20 characters: ");
	fgets(string,SIZE,stdin);
	{
		printf("Please choice. \n");
		printf("1) Change all uppercase to lowercase and lowercase to uppercase. \n");
		printf("2) \n");
		printf("3) \n");
		printf("4) \n");
		printf("5) Exit \n");
		printf("Enter a choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				for(i = 0;i < SIZE;i++)
				{
					if(islower(string[i])
					{
						string[i] = toupper(string[i]);
						printf("%c",string[i]);
					}
					else if(isupper(string[i])
					{
						string[i] = tolower(string[i]);
						printf("%c",string[i]);
					}
				}
				break;
			}

			case 5:
			{
				break;	
			}
			default:
			{
				printf("Not a valid choice. \n");
			}
		}
	}
	
	return EXIT_SUCCESS;
}
}

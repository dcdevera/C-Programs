#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char name[30] = {0};
	FILE *rptr;
	FILE *wptr;
	int choice = 0;

	unsigned int account = 0;
	double balance = 0;

	wptr = fopen("output.txt","w");
	
	if((rptr = fopen("input.txt","r")) == NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		printf("Please select on option: \n");
		printf("1) Display all positive balance accounts. \n");
		printf("2) Display all negative balance accounts. \n");
		printf("3) Display all zero balance accounts. \n");
		printf("4) End program. \n");
		
		while(choice != 4)
		{
			//printf("%p\n",rptr);
			fscanf(rptr,"%d%s%lf",&account,name,&balance);
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
				{
					while(!feof(rptr))
					{
						if(balance > 0)
						{
							printf("%d %s %.2lf\n",account,name,balance);
							fprintf(wptr,"%d %s %.2lf\n",account,name,balance);
						}
						
					}
					break;
				}
				case 2:
				{
					while(!feof(rptr))
					{					
						if(balance < 0)
						{
							printf("%d %s %.2lf\n",account,name,balance);
							fprintf(wptr,"%d %s %.2lf\n",account,name,balance);
						}
					}
					break;
				}
				case 3:
				{
					while(!feof(rptr))
					{
						if(balance == 0)
						{
							printf("%d %s %.2lf\n",account,name,balance);
							fprintf(wptr,"%d %s %.2lf\n",account,name,balance);
						}
					}
					break;
				}
				case 4:
				{
					break;
				}
			}
			
		}
		rewind(rptr);
		scanf("%d",&choice);
	}
	fclose(rptr);	
	fclose(wptr);
}

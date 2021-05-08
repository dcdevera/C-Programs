#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char name[30] = {0};
	FILE *rptr;
	FILE *wptr;

	unsigned int account = 0;
	double balance = 0;

	wptr = fopen("output.dat","w");
	
	if((rptr = fopen("cilent.dat","r")) == NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		while(!feof(rptr))
		{
			//printf("%p\n",rptr);
			fscanf(rptr,"%d%s%lf",&account,name,&balance);
			if(balance > 0)
			{
				printf("%d %s %lf\n",account,name,balance);
				fprintf(wptr,"%d %s %.2lf\n",account,name,balance);
			}
			else if(balance < 0)
			{
				printf("Balance not positive \n");
			}
			
		}
	}
	fclose(rptr);	
	fclose(wptr);
}

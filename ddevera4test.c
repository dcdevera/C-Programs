/*
Darren De Vera
csc-251
9/10/18
lab #4
*/

#include <stdlib.h>
#include <stdio.h>

void Brian(void);
void printer(int x);
int addfive(int a);

int main(void)
{
	int acounter = 0;
	Brian();
	scanf("%d",&acounter);
	printer(acounter);
	printer(5);
	printf("x = %d\n",addfive(acounter));
	z = addfive(accounter);
	printer(z);

	return EXIT_SUCCESS;
}

void Brian(void)
{
	puts("enter number");
}

void printer(int x)
{
	printf("x = %d \n",x);
}

int addfive(int a)
{
	
}

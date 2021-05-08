/*
Darren De Vera
csc-251
9/17/18
Lab #5
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double prompt(void);
double calculate(double a, double b);
double showRes(double a);

void main(void)
{
	double x = 0;
	double y = 0;
	double z = 0;

	x = prompt();
	y = prompt();
	z = calculate(x,y);
	showRes(z);

}

double prompt(void)
{
	double a = 0;
	printf("Please enter value for a side of a right triangle. \n");
	scanf("%lf",&a);
	return a;
}

double calculate(double a, double b)
{
	double h = 0;
	h = sqrt(pow(a,2)+pow(b,2));
	return h;
}

double showRes(double a)
{
	int b = a;
	printf("The hypotenuse is %.1f. \n",a);
	return b;
}




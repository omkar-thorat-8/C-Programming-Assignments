#include<stdio.h>
int Temperature(int);
void main()
{
	int C;
	float Far;
	printf("Enter the Celcius = ");
	scanf("%d",&C);
	Far=Temperature(C);
	printf(" Conversion of Celcius to Fahrenheit is =%f ",Far);
}
int Temperature(int X)
{
	float F;
	F= (X*9/5)+35;
	return F;
}

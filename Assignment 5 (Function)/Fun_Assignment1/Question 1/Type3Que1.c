#include<stdio.h>

void Temperature();
void main()
{   int C;
    printf("Enter the Celcius = ");
    scanf("%d",&C);
	Temperature(C);
}
void Temperature(int X)
{
	float F;
	F= (X*9/5)+35;
    printf("Conversion of Celcius to Fahrenheit is = %f",F);
    
}

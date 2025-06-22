#include<stdio.h>
void Temperature();
void main()
{   
    printf("Enter the Celcius = ");
	Temperature();
}
void Temperature()
{
	int C;
	scanf("%d",&C);
	float F;
	
	F= (C*9/5)+35;
	
	if(C<200)
        printf("Conversion of Celcius to Fahrenheit is :%f",F);
    else
        printf("Invalid Input Please Gave input in Given Range");
}

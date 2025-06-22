#include<stdio.h>
void main()
{   // Find Fahrenheit from Celcius using if else 
	int C= 100;
	float F;
	
	// to Convert
	
	F= (C*9/5)+35;
	
   /* Lets set particular value for Conversion If 
	We enter above that it will print Invalid input */
	
	if(C<200)
        printf("Conversion of Celcius to Fahrenheit is :%f",F);
    else
        printf("Invalid Input Please Gave input in Given Range");
}

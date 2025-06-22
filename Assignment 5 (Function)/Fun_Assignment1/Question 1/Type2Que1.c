#include<stdio.h>
int Temperature();
void main()
{   
    printf("Enter the Celcius = ");
    float Far;
	Far=Temperature();
	printf("Conversion of Celcius to Fahrenheit is = %f",Far);
}
int Temperature()
{
	int C;
	scanf("%d",&C);
	float F;
	F= (C*9/5)+35;
      
        return F;
}

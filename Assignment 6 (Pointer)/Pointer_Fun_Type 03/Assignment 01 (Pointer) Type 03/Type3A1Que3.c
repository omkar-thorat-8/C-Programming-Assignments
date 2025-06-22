#include <stdio.h>

void Addition(int*,int*,int*);
void rev(int*,int*,int*);
void main()
{   
    int d3,d2,d1,digit1,digit2,digit3;
	Addition(&digit1,&digit2,&digit3);
	rev(&d3,&d2,&d1); 
} 
void Addition(int* di1, int* di2 ,int* di3)
{
	int number, sum;
    printf("Enter a 3 digit number To Find Sum : ");
    scanf("%d", &number);
    
    *di1 = number / 100;         
    *di2 = (number / 10) % 10;   
    *di3 = number % 10;
	          
    sum = *di1 + *di2 + *di3;	
    printf("Sum of digits: %d\n", sum);
    
}
void rev(int* X1,int* X2, int* X3)
{
	int n,reverse;
	printf("Enter a 3 digit number to Reverse it: ");
    scanf("%d", &n);
    
    *X1 = n/100;         
    *X2 = (n/10)%10;   
    *X3 = n%10;
	reverse = (*X3 * 100) + (*X2 * 10) + *X1;
    printf("Reversed number: %d\n", reverse);
}


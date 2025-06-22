#include <stdio.h>

void Addition();
void rev();
void main()
{  
	Addition();
	rev(); 
} 
void Addition()
{	int number, sum,digit1,digit2,digit3;
    printf("Enter a 3 digit number To Find Sum : ");
    scanf("%d", &number);
    digit1 = number / 100;         
    digit2 = (number / 10) % 10;   
    digit3 = number % 10;          
    sum = digit1 + digit2 + digit3;	
    printf("Sum of digits: %d\n", sum);
}
void rev()
{
	int n,d3,d2,d1,reverse;
	printf("Enter a 3 digit number to Reverse it: ");
    scanf("%d", &n);
    d1 = n/100;         
    d2 = (n/10)%10;   
    d3 = n%10;
	reverse = (d3 * 100) + (d2 * 10) + d1;
    printf("Reversed number: %d\n", reverse);
}


#include<stdio.h>
void EvenOdd(int*);
void main()
{
	int x;
	printf("Enter the Number : ");
	scanf("%d",&x);
	EvenOdd(&x);
}
void EvenOdd(int* n)
{
	
	if(*n%2==0)
	{
		printf("Number is Even");
	
	}
	else 
	{
		printf("Number is Odd");
	}
}


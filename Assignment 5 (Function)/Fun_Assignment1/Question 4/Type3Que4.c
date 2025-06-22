#include<stdio.h>
void EvenOdd(int);
void main()
{
	int x;
	EvenOdd(x);
}
void EvenOdd(int n)
{
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number is Even");
	
	}
	else 
	{
		printf("Number is Odd");
	}
}


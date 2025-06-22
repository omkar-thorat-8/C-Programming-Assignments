#include<stdio.h>
int EvenOdd();
void main()
{
	int Output;
	Output=EvenOdd();
}
int EvenOdd()
{
			int n;
	
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
	
	
	return n;
}


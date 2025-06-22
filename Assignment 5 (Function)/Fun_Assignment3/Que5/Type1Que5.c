#include<stdio.h>
void Armstrong();
void main()
{
	Armstrong();
}
void Armstrong()
{
    int n,rem,arm=0,temp;
	printf("Enter the Number ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		rem=n%10; 
		arm=(rem*rem*rem)+arm;
		n=n/10;	
	}
	if(arm==temp)
	{
		printf("Armstrong Number");
	}
	else 
	{
		printf("NOT");
	}
}

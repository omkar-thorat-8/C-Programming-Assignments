#include<stdio.h>
int Armstrong(int,int,int,int);
void main()
{
	int Ans;
	int num, r, a, t;
	Ans=Armstrong(num,r,a,t);
	if(Ans==1)
	printf("Armstrong Number");
	else 
	printf("NOT");
}
int Armstrong(int n,int rem,int arm,int temp)
{
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
		return 1;
    }
	else
	{
		return 0;
    } 	
}

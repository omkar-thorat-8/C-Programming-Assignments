#include<stdio.h>
int Armstrong();
void main()
{
	int ans;
	ans=Armstrong();
	if(ans==1)
	printf("Armstrong Number");
	else 
	printf("NOT");
}
int Armstrong()
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
		return 1;
    }
	else
	{
		return 0;
    } 	
}

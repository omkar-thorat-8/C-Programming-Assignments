#include<stdio.h>

void main()
{
	int n,i,count=0;
	printf("Enter the Number to Check Prime or Not ");
    scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	   if(n%i==0)
	   {
	   	  count++; 	  
	   }			
	}	
	if(count==2)
	printf("Prime Number");
	else
	printf("Not Prime Number");
}

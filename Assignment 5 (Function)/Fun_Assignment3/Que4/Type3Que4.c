#include<stdio.h>
void Prime(int,int,int);
void main()
{
   int num,i,c=0;
   Prime(num,i,c);
}
void Prime(int n,int i,int count)
{
	
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

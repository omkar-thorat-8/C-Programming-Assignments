#include<stdio.h>
void Perfect();
void main()
{
	Perfect();
}
void Perfect()
{
		int n,i,sum=0;
		printf("Enter the Number ");
        scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
		printf("Perfect No.");
	else
	    printf("NOT");
}

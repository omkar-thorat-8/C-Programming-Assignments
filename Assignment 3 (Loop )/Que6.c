#include<stdio.h>

void main()
{
	int n=6,i,sum=0;
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

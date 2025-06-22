#include<stdio.h>
void Perfect(int, int ,int);
void main()
{
	int num,j,S=0;
	Perfect(num,j,S);
}
void Perfect(int n,int i,int sum)
{
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

#include<stdio.h>
int Perfect();
void main()
{   
    int Ans;
	Ans=Perfect();
	if(Ans==1)
	printf("Perfect No");
	else
	printf("NOT");  
}
int Perfect()
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
	return 1;
	else
	return 0;
}

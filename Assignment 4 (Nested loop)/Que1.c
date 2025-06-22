#include<stdio.h>
void main()
{
	int start=1, end=500, r,temp,sum,i,j;
	
	for(j=start;j<=end;j++)
	{
		temp=j;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			temp=temp/10;
			sum=sum+r*r*r;
		}
		if(j==sum)
		{
			printf("\n %d",j);
		}
	}
}

#include<stdio.h>
int table(int,int,int);
void main()
{
	int TableNumber;
	int num,j,T;
	TableNumber=table(num,j,T);
	printf("This is Table of:%d",TableNumber);
}
int table(int n,int i,int table)
{
	printf("Enter the Number to Find its Table =\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d * %d = %d\n",n,i,table);
	}
	return n;
}

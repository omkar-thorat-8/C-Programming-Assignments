#include<stdio.h>
void table(int,int,int);
void main()
{
	int num,j,T;
	table(num,j,T);
}
void table(int n,int i,int table)
{
	printf("Enter the Number to Find its Table =\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d * %d = %d\n",n,i,table);
	}
}

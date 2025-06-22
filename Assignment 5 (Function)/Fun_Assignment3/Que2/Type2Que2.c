#include<stdio.h>
int table();
void main()
{
	int num;
    num=table();
	printf("This is Table of :%d.",num);
}
int table()
{
	int n,i,table;
	printf("Enter the Number to Find its Table =\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d * %d = %d\n",n,i,table);
	}
	return n;
}

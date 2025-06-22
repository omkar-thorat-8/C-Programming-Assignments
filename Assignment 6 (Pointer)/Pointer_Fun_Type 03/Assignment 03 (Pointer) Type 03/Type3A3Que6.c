#include<stdio.h>
void Perfect(int*, int ,int*);
void main()
{
	int num,j,S=0;
	printf("Enter the Number ");
    scanf("%d",&num);
	
	Perfect(&num,j,&S);
}
void Perfect(int* n,int i,int* sum)
{
	for(i=1;i<*n;i++)
	{
		if(*n%i==0)
		{
			*sum=*sum+i;
		}
	}
	if(*sum==*n)
		printf("Perfect No.");
	else
	    printf("NOT");
}

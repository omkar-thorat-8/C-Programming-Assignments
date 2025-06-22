#include<stdio.h>
int Perfect(int*, int ,int*);
void main()
{
	int num,j,S=0;
	printf("Enter the Number ");
    scanf("%d",&num);
	
	int Ans=Perfect(&num,j,&S);
	
	if(Ans==1)
	printf("Perfect No");
	else
	printf("NOT");
}
int Perfect(int* n,int i,int* sum)
{
	for(i=1;i<*n;i++)
	{
		if(*n%i==0)
		{
			*sum=*sum+i;
		}
	}
	if(*sum==*n)
	return 1;
	else
	return 0;
}

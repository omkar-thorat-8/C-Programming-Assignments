#include<stdio.h>
int Armstrong(int*,int*,int*,int*);
void main()
{
	int num,r,a=0,t;
	printf("Enter the Number ");
	scanf("%d",&num);
	int Ans=Armstrong(&num,&r,&a,&t);
	if(Ans==1)
	printf("Armstrong Number");
	else 
	printf("NOT");
}
int Armstrong( int* n,int* rem,int* arm,int* temp)
{
	*temp=*n;
	
	while(*n>0)
	{
		*rem=*n%10; 
		*arm=(*rem)*(*rem)*(*rem)+(*arm);
		*n=*n/10;	
	}
	if (*arm==(*temp))
    {
		return 1;
    }
	else
	{
		return 0;
    } 	
}

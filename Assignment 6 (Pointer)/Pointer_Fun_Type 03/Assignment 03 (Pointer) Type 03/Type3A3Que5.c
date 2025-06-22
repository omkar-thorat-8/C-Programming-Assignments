#include<stdio.h>
void Armstrong(int*,int*,int*,int*);
void main()
{
	int num,r,a=0,t;
	printf("Enter the Number ");
	scanf("%d",&num);
	Armstrong(&num,&r,&a,&t);
}
void Armstrong( int* n,int* rem,int* arm,int* temp)
{
	*temp=*n;
	
	while(*n>0)
	{
		*rem=*n%10; 
		*arm=(*rem)*(*rem)*(*rem)+(*arm);
		*n=*n/10;	
	}
	if (*arm==(*temp))
	printf("Armstrong Number");
	else 
	printf("NOT");
}

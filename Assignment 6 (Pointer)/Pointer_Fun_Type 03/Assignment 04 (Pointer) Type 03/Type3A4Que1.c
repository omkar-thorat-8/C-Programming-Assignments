#include<stdio.h>
void ArmStrong(int*,int*,int*,int*,int*, int,int);
void main()
{
	int s=1,e=500,rem,temparory,add,x,y;
	ArmStrong(&s,&e,&rem,&temparory,&add,x,y);
	
}
void ArmStrong(int* start,int* end,int* r,int* temp,int* sum,int i,int j)
{
	for(j=*start;j<=*end;j++)
	{
		*temp=j;
		*sum=0;
		while(*temp!=0)
		{
			*r=*temp%10;
			*temp=*temp/10;
			*sum=*sum+(*r)*(*r)*(*r);
		}
		if(j==*sum)
		{
			printf("\n %d",j);
		}
	}
}

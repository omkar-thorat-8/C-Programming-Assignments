
#include<stdio.h>
void Numbers(int*);
void main()
{
  int x;
  Numbers(&x);
}
void Numbers(int* ptr)
{
	int i;
	for(i=1;i<=10;i++)
	{
		*ptr=i;
		printf("%d\n",*ptr);
	}
}

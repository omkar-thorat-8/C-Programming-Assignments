
#include<stdio.h>
int Numbers(int*);
void main()
{
    int x;
    int Last_Number=Numbers(&x);
  	printf("Last Number Will be = %d\n",Last_Number);
}
int Numbers(int* ptr)
{
	int i;
	for(i=1;i<=10;i++)
	{
		*ptr=i;
		printf("%d\n",*ptr);
	}
	return *ptr;
}

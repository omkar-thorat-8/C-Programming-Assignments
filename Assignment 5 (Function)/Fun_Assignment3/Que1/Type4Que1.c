
#include<stdio.h>
int Numbers(int);
void main()
{
	int x;
	int Last_Number;
    Last_Number=Numbers(x);
  	printf("Last Number Will be = %d\n",Last_Number);
	  	
}
int Numbers(int i)
{
	for( i=1;i<=10;i++)
	{
	  printf("%d\n",i);
	  
	}
	return i-1;
}

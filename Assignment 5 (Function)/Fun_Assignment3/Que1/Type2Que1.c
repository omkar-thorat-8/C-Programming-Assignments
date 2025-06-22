
#include<stdio.h>
int Numbers();
void main()
{
	int Last_Number;
    Last_Number=Numbers();
  	printf("Last Number Will be = %d\n",Last_Number);
	  	
}
int Numbers()
{
	int i;
	for( i=1;i<=10;i++)
	{
	  printf("%d\n",i);
	  
	}
	return i-1;
}

#include<stdio.h>

struct Time
{
	int hour;
	int min;
	int sec;
};
void main()
{
	struct Time T;
	
	printf("Enter the Hour: ");
	scanf("%d",&T.hour);
	
	printf("Enter the Minute: ");
	scanf("%d",&T.min);
	
	printf("Enter the Seconds: ");
	scanf("%d",&T.sec);
	
	printf("-------------------------\n");
	
	printf("Time is :%d:%d:%d",T.hour,T.min,T.sec);
}

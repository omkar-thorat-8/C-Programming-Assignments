#include<stdio.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

void store(Time*,int);
void display(Time*,int);

void main()
{
	struct Time arr[2];
	store(arr,2);
	display(arr,2);
}

void store(Time* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("Enter the Hour: ");
		scanf("%d",&arr[i].hour);
		
		printf("Enter the Minute: ");
		scanf("%d",&arr[i].min);
		
		printf("Enter the Seconds: ");
		scanf("%d",&arr[i].sec);
	
	}
}
void display(Time* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("-------------------------\n");
		
		printf("Time is :%d:%d:%d\n",arr[i].hour,arr[i].min,arr[i].sec);
	}
}

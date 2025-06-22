#include<stdio.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

Time store(Time*);
void display(Time*);

void main()
{
	struct Time T;
	store(&T);
	display(&T);
}

Time store(Time* T)
{
	printf("Enter the Hour: ");
	scanf("%d",&T->hour);
	
	printf("Enter the Minute: ");
	scanf("%d",&T->min);
	
	printf("Enter the Seconds: ");
	scanf("%d",&T->sec);

}
void display(Time* T)
{
	printf("-------------------------\n");
	
	printf("Time is :%d:%d:%d",T->hour,T->min,T->sec);
}

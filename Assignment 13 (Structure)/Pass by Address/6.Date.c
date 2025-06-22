#include<stdio.h>

typedef struct Date
{
	int day;
	int month;
	int year;
}Date;

void store(Date*,int);
void display(Date*,int);

void main()
{
	
	struct Date arr[2];
	store(arr,2);
	display(arr,2);
}

void store(Date* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("Enter the Day: ");
		scanf("%d",&arr[i].day);
		
		printf("Enter the Month: ");
		scanf("%d",&arr[i].month);
		
		printf("Enter the Year: ");
		scanf("%d",&arr[i].year);
	}
}

void display(Date* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("-------------------------\n");
		
		printf("Date is :%d/%d/%d\n",arr[i].day,arr[i].month,arr[i].year);
	}
}

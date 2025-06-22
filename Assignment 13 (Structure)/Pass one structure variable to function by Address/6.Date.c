#include<stdio.h>

typedef struct Date
{
	int day;
	int month;
	int year;
}Date;

Date store(Date*);
void display(Date*);

void main()
{
	Date D1;
	store(&D1);
	display(&D1);
}

Date store(Date* D1)
{
	printf("Enter the Day: ");
	scanf("%d",&D1->day);
	
	printf("Enter the Month: ");
	scanf("%d",&D1->month);
	
	printf("Enter the Year: ");
	scanf("%d",&D1->year);

}

void display(Date* D1)
{
	printf("-------------------------\n");
	
	printf("Date is :%d/%d/%d",D1->day,D1->month,D1->year);
}

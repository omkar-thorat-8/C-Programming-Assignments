#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};
void main()
{
	struct Date D1;
	
	printf("Enter the Day: ");
	scanf("%d",&D1.day);
	
	printf("Enter the Month: ");
	scanf("%d",&D1.month);
	
	printf("Enter the Year: ");
	scanf("%d",&D1.year);
	
	printf("-------------------------\n");
	
	printf("Date is :%d/%d/%d",D1.day,D1.month,D1.year);
}

//SalesManager (id, name, salary, incentive, target)

#include<stdio.h>

typedef struct SalesManager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
}SalesManager;
void store(SalesManager*);
void display(SalesManager*);

void main()
{
	SalesManager SM;
	store(&SM);
	display(&SM);
}
void store(SalesManager* SM)
{
	printf("Enter the ID of Sales Manager: ");
	scanf("%d",&SM->id);
	
	printf("Enter the name of Sales Manager: ");
	scanf("%s",&SM->name);

	printf("Enter the Salary of Sales Manager: ");
	scanf("%d",&SM->salary);
	
	printf("Enter the Incentive of Sales Manager: ");
	scanf("%d",&SM->incentive);
	
	printf("Enter the Target of Sales Manager: ");
	scanf("%d",&SM->target);
	
}

void display(SalesManager* SM)
{
	printf("------------------------------------\n");
	printf("Sales Managers ID is %d \n\n",SM->id);
	printf("Sales Managers name is %s \n\n",SM->name);
	printf("Sales Managers Salary is %d \n\n",SM->salary);
	printf("Sales Managers incentive is %d \n\n",SM->incentive);
	printf("Sales Managers target is %d \n\n",SM->target);
	
}

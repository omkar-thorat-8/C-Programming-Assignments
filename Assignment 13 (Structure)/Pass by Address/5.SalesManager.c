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

void store(SalesManager*,int);
void display(SalesManager*,int);

void main()
{
	SalesManager arr[2];
	store(arr,2);
	display(arr,2);
}
void store(SalesManager* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter the ID of Sales Manager: ");
		scanf("%d",&arr[i].id);
		
		printf("Enter the name of Sales Manager: ");
		scanf("%s",&arr[i].name);
	
		printf("Enter the Salary of Sales Manager: ");
		scanf("%d",&arr[i].salary);
		
		printf("Enter the Incentive of Sales Manager: ");
		scanf("%d",&arr[i].incentive);
		
		printf("Enter the Target of Sales Manager: ");
		scanf("%d",&arr[i].target);
	}
	
}

void display(SalesManager* arr,int size)
{

	int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("------------------------------------\n");
		printf("Sales Managers ID is %d \n\n",arr[i].id);
		printf("Sales Managers name is %s \n\n",arr[i].name);
		printf("Sales Managers Salary is %d \n\n",arr[i].salary);
		printf("Sales Managers incentive is %d \n\n",arr[i].incentive);
		printf("Sales Managers target is %d \n\n",arr[i].target);
	}
}

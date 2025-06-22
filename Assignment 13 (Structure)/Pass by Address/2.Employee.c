#include<stdio.h>
typedef struct Employee
{
	int ID;
	double Salary;
	char name[10];
}Employee;

void storeData(Employee*,int);
void DisplayData(Employee*,int);

void main()
{
	Employee arr[2];
	storeData(arr,2);
	DisplayData(arr,2);
}
void storeData(Employee* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter the ID of Employeee %d: ",i);
		scanf("%d",&arr[i].ID);
		
		printf("Enter the name of Employee %d: ",i);
		scanf("%s",&arr[i].name);
	
		printf("Enter the Salary of Employeee %d: ",i);
		scanf("%d",&arr[i].Salary);
	}

	
}
void DisplayData(Employee* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("------------------------------------\n");
		printf("Employee 1 ID is %d \n\n",arr[i].ID);
		printf("Employee 1 name is %s \n\n",arr[i].name);
		printf("Employee 1 Salary is %d \n\n",arr[i].Salary);
	}
}

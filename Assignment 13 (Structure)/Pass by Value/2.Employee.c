#include<stdio.h>
typedef struct Employee
{
	int ID;
	double Salary;
	char name[10];
}Employee;

Employee storeData(Employee);
void DisplayData(Employee);

void main()
{
	Employee E1;
	
	E1=storeData(E1);
	DisplayData(E1);
}
Employee storeData(Employee E1)
{
	printf("Enter the ID of Employeee 1: ");
	scanf("%d",&E1.ID);
	
	printf("Enter the name of Employee 1: ");
	scanf("%s",&E1.name);

	printf("Enter the Salary of Employeee 1: ");
	scanf("%d",&E1.Salary);
	
	return E1;
	
}
void DisplayData(Employee E1)
{
	printf("------------------------------------\n");
	printf("Employee 1 ID is %d \n\n",E1.ID);
	printf("Employee 1 name is %s \n\n",E1.name);
	printf("Employee 1 Salary is %d \n\n",E1.Salary);
	
}

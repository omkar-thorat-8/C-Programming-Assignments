#include<stdio.h>
struct Employee
{
	int ID;
	double Salary;
	char name[10];
};
void main()
{
	struct Employee E1;
	
	printf("Enter the ID of Employeee 1: ");
	scanf("%d",&E1.ID);
	
	printf("Enter the name of Employee 1: ");
	scanf("%s",&E1.name);

	printf("Enter the Salary of Employeee 1: ");
	scanf("%d",&E1.Salary);
	
	printf("------------------------------------\n");
	printf("Employee 1 ID is %d \n\n",E1.ID);
	printf("Employee 1 name is %s \n\n",E1.name);
	printf("Employee 1 Salary is %d \n\n",E1.Salary);
	
}

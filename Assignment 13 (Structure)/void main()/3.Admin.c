//Admin (id, name, salary, allowance)

#include<stdio.h>
typedef struct Admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
}Admin;

void main()
{
	Admin A;
	
	printf("Enter the ID of Admin: ");
	scanf("%d",&A.id);
	
	printf("Enter the name of Admin: ");
	scanf("%s",&A.name);

	printf("Enter the Salary of Admin: ");
	scanf("%d",&A.salary);
	
	printf("Enter the Allowance of Admin: ");
	scanf("%d",&A.allowance);
	
	
		
	printf("------------------------------------\n");
	printf("Admin ID is %d \n\n",A.id);
	printf("Admin name is %s \n\n",A.name);
	printf("Admin Salary is %d \n\n",A.salary);
	printf("Admin Allowance is %d \n\n",A.allowance);
}

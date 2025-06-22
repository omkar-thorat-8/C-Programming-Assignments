//Admin (id, name, salary, allowance)

#include<stdio.h>
typedef struct Admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
}Admin;

void store(Admin* arr,int);
void display(Admin* arr,int);

void main()
{
	Admin arr[2];
	store(arr,2); 
	display(arr,2);
}
void store(Admin* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter the ID of Admin %d: ",i);
		scanf("%d",&arr[i].id);
		
		printf("Enter the name of Admin %d: ",i);
		scanf("%s",&arr[i].name);
	
		printf("Enter the Salary of Admin %d: ",i);
		scanf("%d",&arr[i].salary);
		
		printf("Enter the Allowance of Admin %d: ",i);
		scanf("%d",&arr[i].allowance);

	}
}

void display(Admin* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("------------------------------------\n");
		printf("Admin ID is %d \n\n",arr[i].id);
		printf("Admin name is %s \n\n",arr[i].name);
		printf("Admin Salary is %d \n\n",arr[i].salary);
		printf("Admin Allowance is %d \n\n",arr[i].allowance);
	}
}

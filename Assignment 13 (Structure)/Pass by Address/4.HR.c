//HR (id, name, salary, commission)

#include<stdio.h>

typedef struct HR
{
	int id;
	char name[20];
	int salary;
	int commission;
}HR;
void store(HR*,int);
void display(HR*,int);
void main()
{
	HR arr[2];
	store(arr,2);
	display(arr,2);
}
void store(HR* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter the ID of Hr %d: ",i);
		scanf("%d",&arr[i].id);
		
		printf("Enter the name of Hr %d: ",i);
		scanf("%s",&arr[i].name);
	
		printf("Enter the Salary of Hr %d: ",i);
		scanf("%d",&arr[i].salary);
		
		printf("Enter the Commission of Hr %d: ",i);
		scanf("%d",&arr[i].commission);
    }
}

void display(HR* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("------------------------------------\n");
		printf("Hr ID is %d \n\n",arr[i].id);
		printf("Hr name is %s \n\n",arr[i].name);
		printf("Hr Salary is %d \n\n",arr[i].salary);
		printf("Hr Commision is %d \n\n",arr[i].commission);
    }

}



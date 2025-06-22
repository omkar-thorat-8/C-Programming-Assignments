//HR (id, name, salary, commission)

#include<stdio.h>

typedef struct HR
{
	int id;
	char name[20];
	int salary;
	int commission;
}HR;
HR store(HR*);
void display(HR*);
void main()
{
	HR h;
	store(&h);
	display(&h);
}
HR store(HR* h)
{
	printf("Enter the ID of Admin: ");
	scanf("%d",&h->id);
	
	printf("Enter the name of Admin: ");
	scanf("%s",&h->name);

	printf("Enter the Salary of Admin: ");
	scanf("%d",&h->salary);
	
	printf("Enter the Commission of Admin: ");
	scanf("%d",&h->commission);

}

void display(HR* h)
{
	printf("------------------------------------\n");
	printf("Hr ID is %d \n\n",h->id);
	printf("Hr name is %s \n\n",h->name);
	printf("Hr Salary is %d \n\n",h->salary);
	printf("Hr Commision is %d \n\n",h->commission);
}

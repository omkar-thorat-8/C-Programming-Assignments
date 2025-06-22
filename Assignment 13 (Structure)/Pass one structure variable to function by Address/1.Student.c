#include<stdio.h>

typedef struct Student
{
	int roll;
	char name[10];
	int marks;
}Student;
void storeData(Student*);
void DisplayData(Student*);
void main()
{
	Student S1;
	storeData(&S1);
	DisplayData(&S1);	
}
void storeData(Student* S1)
{
    printf("Enter the Roll No for Student 1: ");
	scanf("%d",&S1->roll);
	
	printf("Enter the name of Student 1: ");
	scanf("%s",&S1->name);
	
	printf("Enter the Marks of Student 1: ");
	scanf("%d",&S1->marks);
	
}
void DisplayData(Student* S1)
{
	printf("------------------------------------\n");
	printf("Student 1 roll no. is %d \n\n",S1->roll);
	printf("Student 1 name is %s \n\n",S1->name);
	printf("Student 1 marks is %d \n\n",S1->marks);
}

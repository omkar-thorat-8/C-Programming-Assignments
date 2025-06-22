#include<stdio.h>

struct Student
{
	int roll;
	char name[10];
	int marks;
};
void main()
{
	struct Student S1;
	
	printf("Enter the Roll No for Student 1: ");
	scanf("%d",&S1.roll);
	
	printf("Enter the name of Student 1: ");
	scanf("%s",&S1.name);
	
	printf("Enter the name of Student 1: ");
	scanf("%d",&S1.marks);
	
	
	printf("------------------------------------\n");
	printf("Student 1 roll no. is %d \n\n",S1.roll);
	printf("Student 1 name is %s \n\n",S1.name);
	printf("Student 1 marks is %d \n\n",S1.marks);
	
}

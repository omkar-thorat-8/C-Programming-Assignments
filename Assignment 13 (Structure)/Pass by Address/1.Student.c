#include<stdio.h>

typedef struct Student
{
	int roll;
	char name[10];
	int marks;
}Student;

void storeData(Student*,int);
void DisplayData(Student*,int);
void main()
{
	Student arr[3];
	storeData(arr,3);
	DisplayData(arr,3);	
}
void storeData(Student* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
	    printf("Enter the Roll of student %d: ",i);
		scanf("%d",&arr[i].roll);
		
		printf("Enter the name of student %d: ",i);
		scanf("%s",&arr[i].name);
		
		printf("Enter the Marks of student %d: ",i);
		scanf("%d",&arr[i].marks);
    }
}
void DisplayData(Student* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("------------------------------------\n");
		printf("Student %d roll no. is %d \n\n",i,arr[i].roll);
		printf("Student %d name is %s \n\n",i,arr[i].name);
		printf("Student %d marks is %d \n\n",i,arr[i].marks);
	}
}

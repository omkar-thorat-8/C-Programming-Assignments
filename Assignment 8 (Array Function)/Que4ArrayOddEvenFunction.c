// Find odd and even among the numbers. 
#include<stdio.h>
void OddEven(int*,int);
void main()
{
	int size;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	int arr[size];
	int i;
	printf("Enter the Array values : ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n");
	OddEven(arr,size);
}
void OddEven(int* ptr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	   if(ptr[i]%2==0)
	   {
	   	printf("Even Number is : %d\n",ptr[i]);
	   }	
	   else
	   {
	    printf("Odd Number is : %d\n",ptr[i]);
	   }
	}
}

// Find odd and even among the numbers. 
#include<stdio.h>
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
	
	for(i=0;i<size;i++)
	{
	   if(arr[i]%2==0)
	   {
	   	printf("Even Number is : %d\n",arr[i]);
	   }	
	   else
	   {
	    printf("Odd Number is : %d\n",arr[i]);
	   }
	}
}

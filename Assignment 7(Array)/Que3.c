// Find sum of all numbers.
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
	
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum Of Array Number is :%d",sum);
}  

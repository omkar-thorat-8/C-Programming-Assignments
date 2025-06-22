// Print alternate elements in array.
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
	printf("\nArray Elements are :");
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n");
	printf("\nAlternate Printing is :");
	for(i=0;i<size;i=i+2)
	{
		printf("%d  ",arr[i]);
	}
}

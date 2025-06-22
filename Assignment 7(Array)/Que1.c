// Find minimum and maximum number in array. 

#include<stdio.h>
#define size 5
void main()
{
	int arr[size];
	int i;
	
	printf("Enter the Array values: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int min;
	min=arr[0];
	int max;
	max=arr[0];
	
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
			if(arr[i]<min)
	        {
	         	min=arr[i];
          	}
          	if(arr[i]>max)
          	{
          		max=arr[i];
			}
	}
	printf("Minimum value is : %d \n",min);
	printf("Maximum value is : %d ",max);

}

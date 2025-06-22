// Find minimum and maximum number in array. 

#include<stdio.h>
#include <stdlib.h>
void MinMax(int*);
void main()
{
	int size=5;
	int* arr;
	arr=(int*)malloc(sizeof(int*)*size);
	int i;
	
	printf("Enter the Array values: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n");
	MinMax(arr);
}
void MinMax(int* ptr)
{ 
    int i;
    int min;
	min=ptr[0];
	int max;
	max=ptr[0];
	int size=5;
	
	for(i=0;i<size;i++)
	{
			if(ptr[i]<min)
	        {
	         	min=ptr[i];
          	}
          	if(ptr[i]>max)
          	{
          		max=ptr[i];
			}
	}
	printf("Minimum value is : %d \n",min);
	printf("Maximum value is : %d ",max);
}

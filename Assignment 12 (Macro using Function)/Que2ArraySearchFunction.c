// Search the given number in array. 
#include<stdio.h>
#include <stdlib.h>
void Search(int*,int);
void main()
{
	int size;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	int* arr;
	arr=(int*)malloc(sizeof(int*)*size);
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
	Search(arr,size);
}
void Search(int* ptr,int size)
{
	int number,i,found;
	
	printf("Enter the No which u wanted to Find in above array : ");
	scanf("%d",&number);
	
	for(i=0;i<size;i++)
	{
		if(ptr[i]==number)
		{
		printf("\n%d is Found at index %d\n", number, i);
			found = 1;
			break;
		}
	}
	
	if(!found)
	{
		printf("\n%d is Not Found in the array\n", number);
	}
}

	

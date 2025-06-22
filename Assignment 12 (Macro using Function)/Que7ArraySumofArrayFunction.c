#include<stdio.h>
#include <stdlib.h>
void Sum(int*,int*,int*,int);

void main()
{
	long size;
	int i;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	
	int* arr;
	arr=(int*)malloc(sizeof(int*)*size);
	int* brr;
	brr=(int*)malloc(sizeof(int*)*size);
	int* crr;
	crr=(int*)malloc(sizeof(int*)*size);
	
	printf("Enter elements of the 1st array: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d",&arr[i]);
    }
    printf("1st Array Elements are :");
    for (i=0;i<size;i++) 
	{
       printf("%d  ",arr[i]);
    }
    printf("\nEnter elements of the 2nd array: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d",&brr[i]);
    }
     printf("2st Array Elements are :");
    for (i=0;i<size;i++) 
	{
       printf("%d  ",brr[i]);
    }
    
    Sum(arr,brr,crr,size);
}

void Sum(int* ptr1,int *ptr2,int* ptr3,int size)
{
	int i;
    for (i=0;i<size;i++) 
	{
        ptr3[i]=ptr1[i]+ptr2[i];
    }
    printf("\nSum of Two array is :");
    for (i=0;i<size;i++) 
	{
        printf("%d  ",ptr3[i]); 
    }
}

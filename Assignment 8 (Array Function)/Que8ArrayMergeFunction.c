#include <stdio.h>
void Merge(int*,int*,int,int);
void main() 
{
    int size1, size2;
    int i;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of the first array: ");
    
    for (i=0;i<size1;i++) 
	{
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter elements of the second array: ");
    
    for (i=0;i<size2;i++) 
	{
        scanf("%d",&arr2[i]);
    }
    Merge(arr1,arr2,size1,size2);
}
void Merge(int* ptr1,int* ptr2,int size1,int size2)
{
	int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    int i;
    for (i=0;i<size1;i++) 
	{
        mergedArray[i] = ptr1[i];
    }
    for (i=0;i<size2;i++) 
	{
        mergedArray[size1 + i] = ptr2[i];
    }
    
    printf("Merged array is: ");
    
    for (i=0;i<mergedSize;i++) 
	{
        printf("%d ", mergedArray[i]);
    }
}


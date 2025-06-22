// Sort the array.
#include <stdio.h>
void Sort(int*,int);
void main() 
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
        Sort(arr,size);
}
void Sort(int* ptr,int size)
{
	int i,j, temp;
	for (i = 0; i < size - 1; i++) 
        for (j = 0; j < size - i - 1; j++) 
            if (ptr[j] > ptr[j + 1]) 
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) 
        printf("%d ", ptr[i]);
}


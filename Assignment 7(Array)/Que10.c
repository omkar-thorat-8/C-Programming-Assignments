// Sort the array.
#include <stdio.h>

void main() 
{
    int size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    for (i = 0; i < size - 1; i++) 
        for (j = 0; j < size - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
}


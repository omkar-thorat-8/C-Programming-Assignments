#include <stdio.h>
void Reverse(int*,int);
void main() 
{
    int size;
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d", &arr[i]);
    }
    Reverse(arr,size);
}
void Reverse(int* ptr,int size)
{
	int i;
	printf("Reversed array: ");
    for (i=size-1;i>=0;i--) 
	{
        printf("%d ", ptr[i]);
    }

}


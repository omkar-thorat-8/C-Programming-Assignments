#include<stdio.h>
void main()
{
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    int i;

    printf("Enter the Array values: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: ");
    for(i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    int number, found = 0;
    printf("Enter the number you want to find in the above array: ");
    scanf("%d", &number);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            printf("\n%d Number is Found\n", arr[i]);
            printf("Index of number is %d\n", i);
            found = 1; 
            break; 
        }
    }

    if(found == 0) 
    {
        printf("\n%d Number is Not Found\n", number);
    }
}


// Prime
#include <stdio.h>
void Alternate(int*,int);
void main() 
{
    int size;
    int i;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the Array values: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements are: ");
    for (i=0;i<size;i++) 
	{
        printf("%d  ", arr[i]);
    }
    Alternate(arr,size);
}
void Alternate(int*ptr,int size)
{
	int i,j;
    printf("\nPrime Numbers in the Array are: ");
    
    for (i=0;i<size;i++) 
	{
        int n = ptr[i];
        int isPrime = 1;

        if (n <= 1) 
		{
            isPrime = 0;
        } 
		else 
		{
            for (j=2;j*j<=n;j++) 
			{
                if (n % j == 0) 
				{
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) 
		{
            printf("%d  ", n);
        }
    }
}


#include <stdio.h>
int Prime();  
void main()
{
    int result;
	result = Prime(); 

    if (result == 1)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");
}

int Prime()
{
    int n, i, count = 0;
    printf("Enter the Number to Check Prime or Not: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;      
        }           
    }

    if (count == 2)
        return 1;  
    else
        return 0;  
}


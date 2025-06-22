#include <stdio.h>

int main() 
{
    int num, original, remainder, sum = 0, factorial, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num > 0) 
    {
        remainder = num % 10;
        factorial = 1;
        for (i = 1; i <= remainder; i++) 
        {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a strong number\n", original);
    else
        printf("%d is not a strong number\n", original);

    return 0;
}


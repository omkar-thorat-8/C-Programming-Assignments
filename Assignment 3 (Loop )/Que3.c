#include <stdio.h>

void main()
{
int i, sum = 0;
    int n;
    printf("Enter the Number to which you want to find Sum =\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf(" %d + %d = ", sum, i);
        sum = sum + i;
        printf("%d\n", sum);
    }
    
    printf("Total sum = %d", sum);    
}


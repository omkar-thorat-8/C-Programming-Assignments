#include <stdio.h>
int Addition();
void main()
{
	int Summation;
    Summation=Addition();
    printf("Total sum = %d",Summation);
}
int Addition()
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
    return sum;
}

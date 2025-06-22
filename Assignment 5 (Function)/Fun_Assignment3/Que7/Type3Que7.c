#include <stdio.h>
void Factorial(int,int,int);
void main()
{
	int n,j,F=1;
    Factorial(n,j,F);
}
void Factorial(int num,int i, int fact)
{
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial is %d\n",fact);
    }
}


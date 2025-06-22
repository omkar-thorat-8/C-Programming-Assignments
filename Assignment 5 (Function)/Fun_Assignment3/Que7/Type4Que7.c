#include <stdio.h>
int Factorial(int,int,int);
void main()
{
	int Ans;
	int n,j,F=1;
    Ans=Factorial(n,j,F);
    printf("Factorial is %d\n",Ans);
}
int Factorial(int num,int i, int fact)
{
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
}


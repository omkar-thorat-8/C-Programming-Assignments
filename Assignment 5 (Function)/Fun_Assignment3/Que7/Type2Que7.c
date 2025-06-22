#include <stdio.h>
int Factorial();
void main()
{
   int F;
   F=Factorial();
   printf("Factorial is %d\n",F);
}
int Factorial()
{
	int num,i, fact = 1;

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


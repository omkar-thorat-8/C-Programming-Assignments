#include <stdio.h>
void Factorial();
void main()
{
   Factorial();
}
void Factorial()
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
        printf("Factorial is %d\n",fact);
    }

}


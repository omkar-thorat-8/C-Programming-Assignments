#include <stdio.h>
void SUM();
void main() 
{
   SUM();
}
void SUM()
{
	 int num, first, last;
    printf("Enter an integer: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;
    while (first >= 10) {
        first /= 10;
    }

    int sum = first + last;
    printf("The sum of the first and last digits is: %d\n", sum);

}


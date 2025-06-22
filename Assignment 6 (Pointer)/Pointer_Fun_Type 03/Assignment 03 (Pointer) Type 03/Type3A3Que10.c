#include <stdio.h>
void SUM(int*,int,int*);
void main() 
{
   int n,f,l;
   printf("Enter an integer: ");
   scanf("%d", &n);
   SUM(&n,f,&l);
}
void SUM(int* num,int first,int* last)
{
    *last = *num % 10;
    first = *num;
    while (first >= 10) 
	{
        (first) /= 10;
    }

    int sum;
	sum = (first) + (*last);
    printf("The sum of the first and last digits is: %d\n", sum);

}


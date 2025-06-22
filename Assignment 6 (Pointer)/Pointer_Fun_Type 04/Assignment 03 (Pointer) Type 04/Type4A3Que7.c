#include <stdio.h>
int Factorial(int*,int,int*);
void main()
{
	int n,j,F=1;
	printf("Enter a number: ");
    scanf("%d", &n);
    int Fac=Factorial(&n,j,&F);
    printf("Factorial is %d\n",Fac);
}
int Factorial(int* num,int i, int* fact)
{
    if (*num < 0) 
	{
        printf("Factorial of a negative number doesn't exist.\n");
    } 
	else 
	{
    for (i = 1; i <= *num; i++)
	 {
        *fact *= i;
     }
      return *fact;
    }
}


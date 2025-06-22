#include <stdio.h>
int Addition(int,int*);
void main()
{
	int j,summ=0;
	int Summation;
    Summation=Addition(j,&summ);
    printf("Total sum = %d",Summation);
}
int Addition(int i, int* sum)
{
    int n;
    printf("Enter the Number  =\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf(" %d + %d = ", *sum, i);
        *sum = *sum + i;
        printf("%d\n", *sum);
    }

    return *sum;
}

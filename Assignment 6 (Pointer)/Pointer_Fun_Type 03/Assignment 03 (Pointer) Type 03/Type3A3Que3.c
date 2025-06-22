#include <stdio.h>
void Addition(int,int*);
void main()
{
	int j,summ=0;
    Addition(j,&summ);
}
void Addition(int i, int* sum)
{
    int n;
    printf("Enter the Number to which you want to find Sum =\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf(" %d + %d = ", *sum, i);
        *sum = *sum + i;
        printf("%d\n", *sum);
    }
    
    printf("Total sum = %d", *sum);
}

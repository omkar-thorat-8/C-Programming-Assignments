#include<stdio.h>

int table(int*, int);

void main()
{
    int num, j;
    printf("Enter the Number to Find its Table =\n");
    scanf("%d", &num);
    int T;
    T = table(&num, j);
}

int table(int* n, int i)
{
    int table_value;
    for (i = 1; i <= 10; i++)
    {
        table_value = (*n) * i;
        printf("%d * %d = %d\n", *n, i, table_value);
    }
    return table_value;
}


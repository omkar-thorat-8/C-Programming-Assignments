#include <stdio.h>
void Perfect(int,int,int,int);
void main() 
{
	int num,add,x,y;
    Perfect(num,add,x,y);
}
void Perfect(int n,int sum,int i,int j)
{
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for ( i = 1; i <= n; i++) {
        sum = 0;

        for ( j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) 
		{
            printf("%d\n", i);
        }
    }
}


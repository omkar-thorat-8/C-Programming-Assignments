#include <stdio.h>
void Strong(int,int,int);
void main()
{
	int num,x,y;
    Strong(num,x,y);
}
void Strong(int n,int i,int j)
{
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for ( i = 1; i <= n; i++) {
        int sum = 0, temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;

            for ( j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }
}


#include <stdio.h>
void Strong();
void main()
{
    Strong();
}
void Strong()
{
	int n,i,j;
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


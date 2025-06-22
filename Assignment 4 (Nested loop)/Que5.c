#include <stdio.h>

void main() {
    int n,i,j;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for ( i = 1; i <= n; i++) {
        int a = 0, b = 1, next;

        for ( j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d ", a);
            } else if (j == 2) {
                printf("%d ", b);
            } else {
                next = a + b;
                a = b;
                b = next;
                printf("%d ", next);
            }
        }
        printf("\n");
    }
}


#include <stdio.h>

void main() {
    int n, i, j, isPrime;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: \n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
}
		

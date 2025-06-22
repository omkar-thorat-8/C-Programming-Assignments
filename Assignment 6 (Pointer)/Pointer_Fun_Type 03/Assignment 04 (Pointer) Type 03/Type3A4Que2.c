#include <stdio.h>
void Prime(int*,int,int,int*);
void main() 
{
  int num,x,y,P;
  printf("Enter number: ");
  scanf("%d", &num);
  Prime(&num,&x,&y,&P);
}
void Prime(int* n,int i,int j,int* isPrime)
{
    printf("Prime numbers between 1 and %d are: \n", *n);
    for (i = 2; i <= *n; i++) {
        *isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                *isPrime = 0;
                break;
            }
        }
        if (*isPrime == 1) {
            printf("%d ", i);
        }
    }
}
		

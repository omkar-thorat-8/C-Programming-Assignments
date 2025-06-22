#include <stdio.h>
void Strong(int*,int*, int* ,int*, int*, int);
void main() 
{
  	  int n, o, r, S = 0, fact, j;
  	  printf("Enter a number: ");
  	  scanf("%d", &n);
      Strong(&n,&o,&r,&S,&fact,j);
}
void Strong(int* num,int* original,int* remainder,int* sum,int* factorial,int i)
{
    *original = *num;

    while (*num > 0) 
    {
        *remainder = *num % 10;
        *factorial = 1;
        for (i = 1; i <= *remainder; i++) 
        {
            *factorial *= i;
        }
        *sum += *factorial;
        *num /= 10;
    }

    if (*sum == *original)
        printf("strong number\n");
    else
        printf("not a strong number\n");
}


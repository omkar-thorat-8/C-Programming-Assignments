#include <stdio.h>
int Strong(int*,int*, int* ,int*, int*, int);
void main() 
{
  	  int n, o, r, S = 0, fact, j;
  	  printf("Enter a number: ");
  	  scanf("%d", &n);
      int ans;
	  ans=Strong(&n,&o,&r,&S,&fact,j);

      if(ans==1)
  	  printf("strong number\n");
   	  else
      printf("Not strong number\n");
}
int Strong(int* num,int* original,int* remainder,int* sum,int* factorial,int i)
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
    return 1;
    else 
    return 0;
}


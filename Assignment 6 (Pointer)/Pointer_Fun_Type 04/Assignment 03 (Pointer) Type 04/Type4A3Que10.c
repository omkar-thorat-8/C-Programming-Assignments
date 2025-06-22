#include <stdio.h>
int SUM(int*,int,int*);
void main() 
{
   int n,f,l;
   printf("Enter an integer: ");
   scanf("%d", &n);
   int ans;
   ans=SUM(&n,f,&l);
   printf("The sum of the first and last digits is: %d\n",ans);
}
int SUM(int* num,int first,int* last)
{
    *last = *num % 10;
    first = *num;
    while (first >= 10) 
	{
        (first) /= 10;
    }

    int sum;
	sum = (first) + (*last);
   
   return sum;
}


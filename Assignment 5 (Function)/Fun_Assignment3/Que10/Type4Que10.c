#include <stdio.h>
int SUM(int,int,int);
void main() 
{
   int ans;
   int n,f,l;
   ans=SUM(n,f,l);
   printf("The sum of the first and last digits is: %d\n",ans);
}
int SUM(int num,int first,int last)
{
    printf("Enter an integer: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;
    while (first >= 10) {
        first /= 10;
    }

    int sum = first + last;
    return sum;
}


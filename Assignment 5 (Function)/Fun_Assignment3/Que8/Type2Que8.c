#include <stdio.h>
int Strong();
void main() 
{
   int ans;
   ans=Strong();
   if(ans==1)
   printf("strong number\n");
   else
   printf("Not strong number\n");
}
int Strong()
{
	int num, original, remainder, sum = 0, factorial, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) 
    {
        remainder = num % 10;
        factorial = 1;
        for (i = 1; i <= remainder; i++) 
        {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }

    if (sum == original)
    return 1;
    else
    return 0;
}


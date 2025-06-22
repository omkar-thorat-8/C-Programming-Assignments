#include <stdio.h>
int Greater();
void main() 
{
	int Greatest;
    Greatest=Greater();
    printf("The greatest number is: %d\n",Greatest);
}
int Greater()
{
	int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) 
		{
            return a;
        } 
		else
	    {
            return c;
        }
    } else {
        if (b >=c) 
		{
            return b;
        }
	    else
	    {
            return c;
        }
    }
}


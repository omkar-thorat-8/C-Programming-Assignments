#include <stdio.h>
int Greater(int,int,int);
void main() 
{
	int x,y,z;
	int Greatest;
    Greatest=Greater(x,y,z);
    printf("The greatest number is: %d\n",Greatest);
}
int Greater(int a,int b,int c)
{
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


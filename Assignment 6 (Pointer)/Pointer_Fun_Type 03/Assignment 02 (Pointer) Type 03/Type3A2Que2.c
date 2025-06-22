#include <stdio.h>
void Greater(int*,int*,int*);
void main() 
{
	int x,y,z;
	printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    Greater(&x,&y,&z);
}
void Greater(int* a,int* b,int* c)
{
    if (*a >= *b) {
        if (*a >= *c) 
		{
            printf("The greatest number is: %d\n",*a);
        } 
		else
	    {
            printf("The greatest number is: %d\n",*c);
        }
    } else {
        if (*b >= *c) 
		{
            printf("The greatest number is: %d\n",*b);
        }
	    else
	    {
            printf("The greatest number is: %d\n",*c);
        }
    }
}


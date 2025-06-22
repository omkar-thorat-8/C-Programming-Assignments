#include <stdio.h>
int Greater(int*,int*,int*);
void main() 
{
	int x,y,z;
	int Ans;
	printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    Ans=Greater(&x,&y,&z);
    
     printf("The greatest number is: %d\n",Ans);
}
int Greater(int* a,int* b,int* c)
{
    if (*a >= *b) {
        if (*a >= *c) 
		{
            return *a;
        } 
		else
	    {
            return *c;
        }
    } else {
        if (*b >= *c) 
		{
            
            return *b;
        }
	    else
	    {
            
            return *c;
        }
    }
}


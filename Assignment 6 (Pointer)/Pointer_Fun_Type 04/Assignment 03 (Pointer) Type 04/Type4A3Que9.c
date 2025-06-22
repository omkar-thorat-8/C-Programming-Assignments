#include <stdio.h>
int palindrome(int*,int*,int*,int*);
void main() 
{
	int n, rever = 0, remain, ori;
	printf("Enter an Number: ");
    scanf("%d", &n);
    int Ans;
	Ans=palindrome(&n, &rever, &remain, &ori);
    if(Ans==1)
    {
        printf("It is a palindrome.\n");
    } 
	else {
        printf("It is not a palindrome.\n");
    }
}
int palindrome(int* num,int* reversed,int* remainder,int* original)
{
    *original = *num;

    while (*num != 0) {
        *remainder = *num % 10;
        *reversed = *reversed * 10 + *remainder;
        *num /= 10;
    }

    if (*original == *reversed) 
    return 1;
	else
	return 0;
}

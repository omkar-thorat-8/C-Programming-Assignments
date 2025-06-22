#include <stdio.h>
int palindrome();
void main() 
{
	int Ans;
    Ans=palindrome();
    if(Ans==1)
    {
        printf("It is a palindrome.\n");
    } 
	else {
        printf("It is not a palindrome.\n");
    }
}
int palindrome()
{
	int num, reversed = 0, remainder, original;

    printf("Enter an Number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) 
	return 1;
	else
	return 0;
}

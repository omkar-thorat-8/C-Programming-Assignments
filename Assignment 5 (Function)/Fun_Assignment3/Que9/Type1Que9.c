#include <stdio.h>
void palindrome();
void main() 
{
    palindrome();
}
void palindrome()
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

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
}

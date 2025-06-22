#include <stdio.h>
void palindrome(int,int,int,int);
void main() 
{
	int n, rever = 0, remain, ori;
    palindrome(n, rever, remain, ori);
}
void palindrome(int num,int reversed,int remainder,int original)
{

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

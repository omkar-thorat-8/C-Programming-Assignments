#include <stdio.h>

void main() {
    int number, sum, reverse, digit1, digit2, digit3;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    
    digit1 = number / 100;         
    digit2 = (number / 10) % 10;   
    digit3 = number % 10;          

   

    sum = digit1 + digit2 + digit3;

   
    reverse = (digit3 * 100) + (digit2 * 10) + digit1;

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    
}


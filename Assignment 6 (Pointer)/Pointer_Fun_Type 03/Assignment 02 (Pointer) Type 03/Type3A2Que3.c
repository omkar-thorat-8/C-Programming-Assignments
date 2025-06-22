#include <stdio.h>
void Operation(int*,int*);
void main() 
{
	int n1,n2;
	 printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    Operation(&n1,&n2);
}
void Operation(int* num1,int* num2)
{
	
    char op;
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    
    if (op == '+') {
        printf("Result: %d\n", *num1 + *num2);
    } else if (op == '-') {
        printf("Result: %d\n", *num1 - *num2);
    } else if (op == '*') {
        printf("Result: %d\n", *num1 * *num2);
    } else if (op == '/') {
        if (*num2 != 0) {
            printf("Result: %d\n", *num1 / *num2);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else if (op == '%') {
        if (*num2 != 0) {
            printf("Result: %d\n", *num1 % *num2);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
}


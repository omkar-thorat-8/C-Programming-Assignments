#include <stdio.h>
int Operation(int,int);
void main() 
{
	int R;
	int n1,n2;
	R=Operation(n1,n2);
	printf("Result: %d\n",R);
}
int Operation(	int num1, int num2)
{

    char op;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    
    if (op == '+') {
        return num1 + num2;
    } else if (op == '-') {
        return num1 - num2;
    } else if (op == '*') {
        return num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            printf("Division by zero is not allowed.\n");
            return 0;
        }
    } else if (op == '%') {
        if (num2 != 0) {
            return num1 % num2;
        } else {
            printf("Division by zero is not allowed.\n");
            return 0;
        }
    } else {
        printf("Invalid operator.\n");
        return 0;
    }
    
   
}


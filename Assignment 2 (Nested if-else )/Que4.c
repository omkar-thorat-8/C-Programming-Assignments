#include <stdio.h>

void main() {
    int choice;
    
    printf("Menu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Calculate total Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
    } else if (choice == 2) {
        float basic, hra, da;
		int totalSalary;
        printf("Enter Basic Salary: ");
        scanf("%f", &basic);
        
        if (basic < 10000) {
            hra = basic * 0.2;
            da = basic * 0.8;
        } else {
            hra = basic * 0.3;
            da = basic * 0.9;
        }
        
        totalSalary = basic + hra + da;
        printf("Total Salary After Incentives: %d \n", totalSalary);
    } else {
        printf("Invalid choice.\n");
    }
    
    
}


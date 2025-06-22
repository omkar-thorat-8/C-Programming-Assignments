#include <stdio.h>

void main()
{
    printf("To Check Even or Odd\n");
    DisplayOddEven();
    printf("\n To Calculate total Salary\n");
    DisplayTotalSalary();
}
void DisplayOddEven()
{
	int num;
        printf("\n Enter a number = ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
}
void DisplayTotalSalary()
{
	 float basic, hra, da;
		int totalSalary;
        printf("\n Enter Basic Salary = ");
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
}

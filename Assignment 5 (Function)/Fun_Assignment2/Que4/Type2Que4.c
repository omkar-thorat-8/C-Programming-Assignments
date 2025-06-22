#include <stdio.h>
int DisplayOddEven();
int DisplayTotalSalary();
void main()
{
	int OE,S;
    printf("To Check Even or Odd\n");
    OE=DisplayOddEven();
    if (OE == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
    printf("\n To Calculate total Salary\n");
    S=DisplayTotalSalary();
    printf("Total Salary After Incentives: %d \n",S);
}
int DisplayOddEven()
{
	int num,result;
        printf("\n Enter a number = ");
        scanf("%d", &num);
        result = num%2;
        return result;
}
int DisplayTotalSalary()
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
        
        return totalSalary;
}

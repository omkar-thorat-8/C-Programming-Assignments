#include <stdio.h>
int DisplayOddEven(int);
int DisplayTotalSalary(float,float,float);
void main()
{   int OE;
    int S;
    int n;
    float b,h,d;
    printf("To Check Even or Odd\n");
    OE=DisplayOddEven(n);
    if (OE == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
    printf("\n To Calculate total Salary\n");
    S=DisplayTotalSalary(b,h,d);
    printf("Total Salary After Incentives: %d \n",S);
}
int DisplayOddEven(int num)
{
	    int result;
        printf("\n Enter a number = ");
        scanf("%d", &num);
        
        result =num % 2;
        return result;
}
int DisplayTotalSalary(float basic, float hra, float da)
{
	 
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

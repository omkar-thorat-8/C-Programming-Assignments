#include<stdio.h>
void salary();
void main()
{
	salary();
}
void salary()
{
	 float basic, da, ta, hra;
	int totalSalary;

   
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    
    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

   
    totalSalary = basic + da + ta + hra;

   
    printf("Total Salary: %d \n", totalSalary);
}






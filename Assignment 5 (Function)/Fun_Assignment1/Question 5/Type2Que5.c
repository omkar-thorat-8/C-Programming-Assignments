
#include<stdio.h>
int salary();
void main()
{
	int s;
	s=salary();
	printf("Total Salary: %d \n",s);
}
int salary()
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
    return totalSalary;
}

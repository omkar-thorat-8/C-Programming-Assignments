
#include<stdio.h>
int salary(float,float,float,float);
void main()
{
	int s;
	float b, d, t, h;
	s=salary(b,d,t,h);
	
	printf("Total Salary: %d \n",s);
}
int salary(float basic,float da,float ta,float hra)
{
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

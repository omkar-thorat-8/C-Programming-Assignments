
#include<stdio.h>
void salary(float*,float*,float*,float*);
void main()
{
	float b, d, t, h;
	 printf("Enter basic salary: ");
    scanf("%f", &b);
	salary(&b,&d,&t,&h);
}
void salary(float* basic,float* da,float* ta,float* hra)
{
	int totalSalary;
    if (*basic <= 5000) {
        *da = 0.10 * (*basic);
        *ta = 0.20 * (*basic);
        *hra = 0.25 * (*basic);
    } else {
        *da = 0.15 * (*basic);
        *ta = 0.25 * (*basic);
        *hra = 0.30 * (*basic);
    }
    totalSalary = *basic + *da + *ta + *hra;
    printf("Total Salary: %d \n",totalSalary);
}

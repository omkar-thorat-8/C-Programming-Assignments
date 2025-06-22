#include <stdio.h>
void DisplayOddEven(int*);
void DisplayTotalSalary(float*,float*,float*);
void main()
{    
    int n;
    
       printf("\n Enter a number = ");
        scanf("%d", &n);
        
    float b,h,d;
    
    printf("To Check Even or Odd\n");
    
    DisplayOddEven(&n);
    
    printf("\n To Calculate total Salary\n");
    
      printf("\n Enter Basic Salary = ");
        scanf("%f", &b);
    
    DisplayTotalSalary(&b,&h,&d);
}
void DisplayOddEven(int* num)
{
        
        if (*num % 2 == 0) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
}
void DisplayTotalSalary(float* basic, float* hra, float* da)
{
	 
		int totalSalary;
      
        
        if (*basic < 10000) {
            *hra = *basic * 0.2;
            *da = *basic * 0.8;
        } else {
            *hra = *basic * 0.3;
            *da = *basic * 0.9;
        }
        
        totalSalary = *basic + *hra + *da;
        printf("Total Salary After Incentives: %d \n", totalSalary);
}

#include<stdio.h>
void main()
{
	char gender;
	int age;
	
	printf("Enter the Gender (Fro Male = M) (For Female = F)\n");
    scanf("%c",&gender);
    printf("Enter the age =\n");
    scanf("%d",&age);
	
	if(gender == 'M')
	{
		if(age>=21)
		printf("You are Eligible to Marry");
		else
		printf("You are not Eligible to Marry");
	}else if (gender == 'F')
	{
		if(age>=18)
		printf("You are Eligible to Marry");
		else
		printf("You are not Eligible to Marry");
	}
	else 
	{
		printf("Invalid Input");
	}
	
	
	
}

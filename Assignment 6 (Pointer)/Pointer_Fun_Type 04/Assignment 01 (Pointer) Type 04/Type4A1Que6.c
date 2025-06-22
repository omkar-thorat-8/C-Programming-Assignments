#include<stdio.h>
int Marry(char*,int*);
void main()
{
	char g;
	int a;
	
	printf("Enter the Gender (Fro Male = M) (For Female = F)\n");
    scanf("%c",&g);
    printf("Enter the age =\n");
    scanf("%d",&a);
    
	int ageeee;
	ageeee=Marry(&g,&a);
}
int Marry(char* gender,int* age)
{	
	if(*gender == 'M')
	{
		if(*age>=21)
		printf("You are Eligible to Marry");
		else
		printf("You are not Eligible to Marry");
	}else if (*gender == 'F')
	{
		if(*age>=18)
		printf("You are Eligible to Marry");
		else
		printf("You are not Eligible to Marry");
	}
	else 
	{
		printf("Invalid Input");
	}
	return *age;
}
	

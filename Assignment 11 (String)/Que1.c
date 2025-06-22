//Write a program to scan string from user then 
//scan a single character and search it in a accepted string.
#include<stdio.h>
void main()
{
	char str[10];
	printf("Enter the Character Array (String) : ");
	scanf("%s",&str);
	int flag=0;
	
	char n;
	printf("Enter the Character u wanted to find : ");
	scanf("%s",&n);
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==n)
		{
			//printf("Index at character Found : %d\n",i);
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		printf("Index at character Found : %d\n",i);
	}
	else
	{
		printf("Character is not Found");
	}
}

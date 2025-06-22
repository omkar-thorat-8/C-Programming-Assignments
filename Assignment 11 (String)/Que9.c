//WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions

#include<stdio.h>

void main()
{
	int size=20;
	char str1[size];
	
	printf("Enter the String : ");
	scanf("%s",&str1);
	
	char str2[size];
	
	printf("Enter the String : ");
	scanf("%s",&str2);
	
	int i=0,len1=0;
	while(str1[i]!='\0')
	{
		len1++;
		i++;
	}
	
	i=0;
	int len2=0;
	while(str2[i]!='\0')
	{
		len2++;
		i++;
	}
	
	if(len1>len2)
	{
		printf("String 1 is greater than String 2");
	}
	else if(len2>len1)
	{
		printf("String 2 is greater than String 1");	
	}
}

//WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
void main()
{
	int size=20;
	char str[size];
	
	printf("Enter the String : ");
	gets(str);
	
	int i;
	for(i=0;i<size;i++)
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("Updated String is : %s",str);
}

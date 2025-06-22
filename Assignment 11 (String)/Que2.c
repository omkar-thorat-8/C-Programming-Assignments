//WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void main()
{
	char str[100];
	printf("Enter the Character Array (String) : ");
	scanf("%s",&str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
		  str[i]='$';	
	    }
	    i++;
	}
	printf("%s",&str);
}

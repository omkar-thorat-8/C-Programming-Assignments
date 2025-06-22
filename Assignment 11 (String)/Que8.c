//WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
void main()
{
	int size=20;
	char str[size];
	
	printf("Enter the String : ");
	gets(str);
	
	int i,count=0;
	int len=0;
	
	while(str[i]!='\0')
	{
	  if(str[i]==' ')
	  {
	  	count++;	
	  }
	  i++;
	}
	
	printf("Number of Words in String is : %d",count+1);
	
}

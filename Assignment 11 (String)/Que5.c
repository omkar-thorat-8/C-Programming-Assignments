//WAP to Count the Number of Vowels in a String
#include<stdio.h>
void main()
{
	int size=20;
	char str[size];
	
	printf("Enter the String : ");
	scanf("%s",&str);
	
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
		else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			count++;
		}
	}
	
	printf("Number of Vowels in String is : %d",count);
	
}

//WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include <stdio.h>

void main() 
{
    char str[100];
    printf("Enter the Character Array (String): ");
    scanf("%s", str);
    
    int n, len = 0;
    char temp;
	int i=0;
    while (str[i] != '\0') 
	{
        len++;
        i++;
    }
    i=0;
    
   // printf("%d",i);
    // printf("%d",len);
	
	if(str[i]<str[len-1])
	{
		temp=str[i];
		str[i]=str[len-1];
		str[len-1]=temp;
	}
	
	printf("%s",str);
}


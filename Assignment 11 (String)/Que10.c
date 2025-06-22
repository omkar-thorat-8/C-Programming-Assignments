#include <stdio.h>

int isPalindrome(char* str);

void main()
 {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
	int result=isPalindrome(str);
	
    if (result==1) 
	{
        printf("\"%s\" is a palindrome.\n", str);
    } else
	 {
        printf("\"%s\" is not a palindrome.\n", str);
    }
}

int isPalindrome(char* str) 
{
    int i=0, len=0;

    while (str[len]!='\0')
	{
        len++;
    }
    len--;

    while (i<len) 
	{
        if (str[i] != str[len]) 
		{
            return 0;
        }
        i++;
        len--;
    }
    return 1;
}


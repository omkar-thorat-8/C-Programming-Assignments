#include <stdio.h>

void myStrcpy(char*, char*);

void main() {

    char arr[100];
	char brr[100]="Hello";
	
    printf("Enter the 1st string: ");
    scanf("%s", arr);
    
    myStrcpy(brr,arr);
   
}

void myStrcpy(char* ptr2, char* ptr1) 
{
    int i = 0;
    while (ptr1[i] != '\0') 
	{
        ptr2[i] = ptr1[i];
        i++;
    }
     ptr2[i] = ptr1[i];
     printf("Copied 2nd string: %s\n",ptr2);
}


#include<stdio.h>
void mystrlen(char*);
void main() 
{
	char arr[15]="Ankit";
	mystrlen(arr);
}
void mystrlen(char* arr)
{
    int i=0;
    while (arr[i]!='\0')
    {
        i++;
    }
    printf("Length of String is : %d",i);
}

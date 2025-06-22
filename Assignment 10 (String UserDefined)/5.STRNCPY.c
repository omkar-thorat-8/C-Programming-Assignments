#include<stdio.h>
void mystrncpy(char*,char*,int);
void main()
{
	int number;
	char arr[15]="Ankitt";
	char brr[15];
	
	printf("Enter the index number till which you wanted to copy string :");
	scanf("%d[]",&number);
	mystrncpy(brr,arr,number);
}

void mystrncpy(char* brr,char* arr,int n){
   
    int i=0;

    while (i<n)
    {
        brr[i]=arr[i];
        i++;
    }
    
    brr[i]='\0';
    printf("%s",brr);
}

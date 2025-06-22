#include<stdio.h>
void mystrupper(char*);
void main()
{
	char arr[15]="ankitt";
	mystrupper(arr);

}

void mystrupper(char* arr)
{
   
    int i=0;

    while (arr[i]!='\0')
    {
        if(arr[i]>=97  &&  arr[i]<=122)
		{
            arr[i]=arr[i]-32;
        }
        i++;
    }
    
   printf("%s",arr);

}

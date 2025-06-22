#include<stdio.h>
void mystrlower(char*);
void main()
{
	char arr[15]="ANKITT";
	mystrlower(arr);
}

void mystrlower(char* arr)
{
   
    int i=0;

    while (arr[i]!='\0')
    {
        if(arr[i]>=65 &&  arr[i]<=90)
		{
            arr[i]=arr[i]+32;
        }
        i++;
    }
   	printf("%s",arr);
}

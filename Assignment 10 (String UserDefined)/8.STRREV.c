#include<stdio.h>
void mystrrev(char*);
void main()
{
	char arr[15]="Ankitt";
	mystrrev(arr);
	
}

void mystrrev(char* arr)
{
   
    int i=0,count=0;
    char temp;

    while (arr[i]!='\0')
    {
        count++;
        i++;
    }
    
    i=0;
  
     while (i<(count/2))
    {
     	 temp=arr[i];
      	arr[i]=arr[(count-1)-i];
     	 arr[(count-1)-i]=temp;
    	i++;
    }
    
	printf("%s",arr);
	

}

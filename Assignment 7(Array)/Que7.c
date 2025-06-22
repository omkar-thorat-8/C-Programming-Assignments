#include<stdio.h>
void main()
{
	int size;
	int i;
	printf("Enter the Size of Array : ");
	scanf("%d",&size);
	
	int arr[size], brr[size], crr[size];
	
	printf("Enter elements of the 1st array: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d",&arr[i]);
    }
    printf("1st Array Elements are :");
    for (i=0;i<size;i++) 
	{
       printf("%d  ",arr[i]);
    }
    printf("\nEnter elements of the 2nd array: ");
    for (i=0;i<size;i++) 
	{
        scanf("%d",&brr[i]);
    }
     printf("2st Array Elements are :");
    for (i=0;i<size;i++) 
	{
       printf("%d  ",brr[i]);
    }
    
    for (i=0;i<size;i++) 
	{
        crr[i]=arr[i]+brr[i];
    }
    printf("\nSum of Two array is :");
    for (i=0;i<size;i++) 
	{
        printf("%d  ",crr[i]); 
    }
     
}

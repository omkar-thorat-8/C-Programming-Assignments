 //Distance ( feet, inch)
 
 #include<stdio.h>
 
 typedef struct Distance
 {
 	int feet;
 	int inch;
 }Distance;
 
 void store(Distance*,int);
 void display(Distance*,int);
 
 void main()
 {
 	Distance arr[2];
 	store(arr,2);
 	display(arr,2);
}
void store(Distance* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
	
	 	printf("Enter the Feet: ");
		scanf("%d",&arr[i].feet);
		
		printf("Enter the inch: ");
		scanf("%d",&arr[i].inch);
	}
}

void display(Distance* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("-------------------------\n");
		
		printf("feet is :%d\n",arr[i].feet);
		printf("inch is :%d\n",arr[i].inch);
	}
 }

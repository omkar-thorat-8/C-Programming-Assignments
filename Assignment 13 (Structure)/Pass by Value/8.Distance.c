 //Distance ( feet, inch)
 
 #include<stdio.h>
 
 typedef struct Distance
 {
 	int feet;
 	int inch;
 }Distance;
 
 Distance store(Distance);
 void display(Distance);
 
 void main()
 {
 	Distance D;
 	D=store(D);
 	display(D);
}
Distance store(Distance D)
{
 	printf("Enter the Feet: ");
	scanf("%d",&D.feet);
	
	printf("Enter the inch: ");
	scanf("%d",&D.inch);

	return D;
}

void display(Distance D)
{
	printf("-------------------------\n");
	
	printf("feet is :%d\n",D.feet);
	printf("inch is :%d",D.inch);
 }

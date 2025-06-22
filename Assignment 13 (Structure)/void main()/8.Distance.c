 //Distance ( feet, inch)
 
 #include<stdio.h>
 
 typedef struct Distance
 {
 	int feet;
 	int inch;
 }Distance;
 
 void main()
 {
 	Distance D;
 	
 	printf("Enter the Feet: ");
	scanf("%d",&D.feet);
	
	printf("Enter the inch: ");
	scanf("%d",&D.inch);
	
	printf("-------------------------\n");
	
	printf("feet is :%d\n",D.feet);
	printf("inch is :%d",D.inch);
 }

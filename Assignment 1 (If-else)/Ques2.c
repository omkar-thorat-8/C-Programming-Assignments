#include<stdio.h>
void main()
{   // Find Area and Perimeter of Rectangle and Circle using if else
	int area;
	int perimeter;
	int l,b,r,choice;
	
	printf("Enter your Choice to Find Area & Perimeter of : \n (Choice 1  Rectangle) \n (Choice 2  Circle) \n ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter the length = \n");
		scanf("%d",&l);
		printf("Enter the Breadth = \n");
		scanf("%d",&b);
		
		area =l*b;
      	perimeter =2*(l+b);
		
		printf("Area of Rectangle = %d",area);
		printf("\n Perimeter of Rectangle = %d",perimeter);
	}
	else if (choice==2)
	{
		printf("Enter the radius = \n");
		scanf("%d",&r);
		
		area=3.14*r*r;
		
		printf("Arae of Circle = %d",area);
		
		perimeter=2*3.14*r;
		
		printf("\nPerimeter of Circle = %d",perimeter);
    }
    else 
    {
    	printf("Invalid Input");
	}
}
		
		


#include<stdio.h>
	void Triangle();
    void Circle();	
void main()
{   
  Triangle();
  Circle();
}
void Triangle()
{
	    int area1;
	    int perimeter1;
		int l,b;
	printf("\n\nEnter the length = \n");
		scanf("%d",&l);
		printf("Enter the Breadth = \n");
		scanf("%d",&b);
		
		area1 =l*b;
      	perimeter1 =2*(l+b);
      	
      	printf("Area of Rectangle = %d",area1);
		printf("\nPerimeter of Rectangle = %d\n \n",perimeter1);
	
}
void Circle()
{
	    	int r;
	    	int area2;
	    	int perimeter2;
		printf("\n Enter the radius = ");
		scanf("%d",&r);
		
		area2=3.14*r*r;
		
		printf("Arae of Circle = %d",area2);
		
		perimeter2 =2*3.14*r;
		
		printf("\nPerimeter of Circle = %d",perimeter2);
	
}

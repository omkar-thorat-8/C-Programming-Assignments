#include<stdio.h>
	void area(int,int);
	void perimeter(int,int);
void main()
{   
  int l,b,le,br;
  area(l,b);
  perimeter(le,br);
}
void area(int X,int Y)
{
		int areaaa;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&X);
		printf("Enter the Breadth = \n");
		scanf("%d",&Y);
		
		areaaa =X*Y;
		
		printf("Area of Rectangle = %d\n",areaaa);
}
void perimeter(int length,int Breadth)
{
	    int peri;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&length);
		printf("Enter the Breadth = \n");
		scanf("%d",&Breadth);
		peri =2*(length+Breadth);
		printf("Perimeter of Rectangle= %d",peri);

}

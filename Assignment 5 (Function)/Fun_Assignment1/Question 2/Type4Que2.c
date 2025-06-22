#include<stdio.h>
	int area(int,int);
	int perimeter(int,int);
int main()
{   
  int l,b,le,br,a,p;
  a=area(l,b);
  printf("Area of Rectangle = %d\n",a);
  p=perimeter(le,br);
  printf("Perimeter of Rectangle= %d",p);
  return 0;
}
int area(int X,int Y)
{
		int areaaa;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&X);
		printf("Enter the Breadth = \n");
		scanf("%d",&Y);
		
		areaaa =X*Y;
		return areaaa;
}
int perimeter(int length,int Breadth)
{
	    int peri;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&length);
		printf("Enter the Breadth = \n");
		scanf("%d",&Breadth);
		peri =2*(length+Breadth);
		return peri;
}

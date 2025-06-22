#include<stdio.h>
	int area();
	int perimeter();
void main()
{   
  int a,p;
  a=area();
  printf("Area of Rectangle =%d\n",a);
  p=perimeter();
  printf("Perimeter of Rectangle =%d",p);
}
int area()
{
		int l,b,areaaa;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&l);
		printf("Enter the Breadth = \n");
		scanf("%d",&b);
		
		areaaa =l*b;
		
	return areaaa;
}
int perimeter()
{
	    int le,br,peri;
	    printf("\n\nEnter the length = \n");
		scanf("%d",&le);
		printf("Enter the Breadth = \n");
		scanf("%d",&br);
		peri =2*(le+br);

		return peri;
}

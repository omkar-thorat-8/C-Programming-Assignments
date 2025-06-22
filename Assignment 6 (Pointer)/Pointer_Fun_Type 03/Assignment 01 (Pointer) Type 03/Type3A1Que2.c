#include<stdio.h>
	void area(int*,int*);
	void perimeter(int*,int*);
void main()
{   
    int l,b,le,br;
    
    printf("\n\nEnter the length = \n");
    scanf("%d",&l);
	printf("Enter the Breadth = \n");
	scanf("%d",&b);
	
	area(&l,&b);
	
	printf("\n\nEnter the length = \n");
	scanf("%d",&le);
	printf("Enter the Breadth = \n");
	scanf("%d",&br);
    
	perimeter(&le,&br);
}
void area(int* X,int* Y)
{
		int areaaa;
		
		areaaa =(*X)*(*Y);
		
		printf("Area of Rectangle = %d\n",areaaa);
}
void perimeter(int* length,int* Breadth)
{
	    int peri;
	    
		peri =2*(*length+*Breadth);
		printf("Perimeter of Rectangle= %d",peri);

}

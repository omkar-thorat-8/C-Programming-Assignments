#include<stdio.h>
	int area(int*,int*);
	int perimeter(int*,int*);
void main()
{   
    int l,b,le,br;
    int a,p;
    
    printf("\n\nEnter the length = \n");
    scanf("%d",&l);
	printf("Enter the Breadth = \n");
	scanf("%d",&b);
	
	a=area(&l,&b);
	
	printf("\n\nEnter the length = \n");
	scanf("%d",&le);
	printf("Enter the Breadth = \n");
	scanf("%d",&br);
    
	p=perimeter(&le,&br);
}
int area(int* X,int* Y)
{
		int areaaa;
		
		areaaa =(*X)*(*Y);
		
		printf("Area of Rectangle = %d\n",areaaa);
		return areaaa;
}
int perimeter(int* length,int* Breadth)
{
	    int peri;
	    
		peri =2*(*length+*Breadth);
		printf("Perimeter of Rectangle= %d",peri);
		
		return peri;

}

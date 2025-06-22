//Complex (real, imaginary)
#include<stdio.h>
typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

void main()
{
	Complex c;
	
	printf("Enter the real: ");
	scanf("%d",&c.real);
	
	printf("Enter the imaginary: ");
	scanf("%d",&c.imaginary);
	
	printf("-------------------------\n");
	
	printf("real is :%d\n",c.real);
	printf("imaginary is :%d",c.imaginary);
}

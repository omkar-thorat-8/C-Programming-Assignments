//Complex (real, imaginary)
#include<stdio.h>
typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

Complex store(Complex*);
void display(Complex*);

void main()
{
	Complex c;
	store(&c);
	display(&c);
}
Complex store(Complex* c)
{
	printf("Enter the real: ");
	scanf("%d",&c->real);
	
	printf("Enter the imaginary: ");
	scanf("%d",&c->imaginary);
	
}
void display(Complex* c)
{

	printf("-------------------------\n");
	
	printf("real is :%d\n",c->real);
	printf("imaginary is :%d",c->imaginary);
}

//Complex (real, imaginary)
#include<stdio.h>
typedef struct Complex
{
	int real;
	int imaginary;
}Complex;

void store(Complex*,int);
void display(Complex*,int);

void main()
{
	Complex arr[2];
	store(arr,2);
	display(arr,2);
}
void store(Complex* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("Enter the real: ");
		scanf("%d",&arr[i].real);
		
		printf("Enter the imaginary: ");
		scanf("%d",&arr[i].imaginary);
	}
	
}
void display(Complex* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
		
		printf("-------------------------\n");
		
		printf("real is :%d\n",arr[i].real);
		printf("imaginary is :%d\n",arr[i].imaginary);
	}
}

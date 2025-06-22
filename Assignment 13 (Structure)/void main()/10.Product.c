//Product (id, name, quantity, price)

#include<stdio.h>

typedef struct Product
{
	int id;
	int salary;
	int quantity;
	int price;
}Product;

void main()
{
	Product P;
	
	printf("Enter the ID : ");
	scanf("%d",&P.id);
	
	printf("Enter the Salary : ");
	scanf("%d",&P.salary);
	
	printf("Enter the Quantity : ");
	scanf("%d",&P.quantity);
	
	printf("Enter the price : ");
	scanf("%d",&P.price);
	
	printf("------------------------------------\n");
	printf("Product is %d \n\n",P.id);
	printf("Product Salary is %d \n\n",P.salary);
	printf("Product Quantity is %d \n\n",P.quantity);
	printf("Product Price is %d \n\n",P.price);
}

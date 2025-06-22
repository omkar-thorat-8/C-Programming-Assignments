//Product (id, name, quantity, price)

#include<stdio.h>

typedef struct Product
{
	int id;
	char name[1000];
	int quantity;
	int price;
}Product;
Product storeData(Product*);
void DisplayData(Product*);
void main()
{
	Product P;
	storeData(&P);
	DisplayData(&P);	
}
Product storeData(Product* P)
{	
	printf("Enter the ID : ");
	scanf("%d",&P->id);
	
	printf("Enter the Name : ");
	scanf("%s",&P->name);
	
	printf("Enter the Quantity : ");
	scanf("%d",&P->quantity);
	
	printf("Enter the price : ");
	scanf("%d",&P->price);
	
}
void DisplayData(Product* P)
{
	printf("------------------------------------\n");
	printf("Product is %d \n\n",P->id);
	printf("Product Name is %s \n\n",P->name);
	printf("Product Quantity is %d \n\n",P->quantity);
	printf("Product Price is %d \n\n",P->price);
}

//Product (id, name, quantity, price)

#include<stdio.h>

typedef struct Product
{
	int id;
	char name[100];
	int quantity;
	int price;
}Product;
void storeData(Product*,int);
void DisplayData(Product*,int);
void main()
{
	Product arr[2];
	storeData(arr,2);
	DisplayData(arr,2);	
}
void storeData(Product* arr,int size)
{	
		int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter the ID : ");
		scanf("%d",&arr[i].id);
		
		printf("Enter the name : ");
		scanf("%s",&arr[i].name);
		
		printf("Enter the Quantity : ");
		scanf("%d",&arr[i].quantity);
		
		printf("Enter the price : ");
		scanf("%d",&arr[i].price);
	}
	
}
void DisplayData(Product* arr,int size)
{
		int i;
	for(i=1;i<size+1;i++)
	{
	
		printf("------------------------------------\n");
		printf("Product is %d \n\n",arr[i].id);
		printf("Product Name is %s \n\n",arr[i].name);
		printf("Product Quantity is %d \n\n",arr[i].quantity);
		printf("Product Price is %d \n\n",arr[i].price);
	}
}

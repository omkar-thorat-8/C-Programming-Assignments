//Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them

#include<stdio.h>

typedef struct Book
{
	char bookName[100];
	int id;
	char auther[100];
	int price;
}Book;
Book storeData(Book);
void display(Book);
void main()
{
	Book B;
	B=storeData(B);
	display(B);
}
Book storeData(Book B)
{
	printf("Enter the Book Name : ");
	scanf("%s",&B.bookName);
	
	printf("Enter the Id : ");
	scanf("%d",&B.id);
	
	printf("Enter the Auther Name : ");
	scanf("%s",&B.auther);
	
	printf("Enter the Price of Book");
	scanf("%d",&B.price);
	
	return B;
}
void display(Book B)
{
	printf("Book name is %s \n",B.bookName);
	printf("Book id is %d \n",B.id);
	printf("Auther of Book is %s \n",B.auther);
	printf("Price of Book is %d \n",B.price);
}


#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int price;
    int quantity;
} SalesSystem;

SalesSystem DefineProduct();

void AddItemToCart(SalesSystem* items, int itemCount);
void CalculateTotal(SalesSystem* items, int itemCount);

int main() {
    SalesSystem items[10]; 
    int itemCount = 0;     
    int choice = 0;     

    while (choice != 4) 
	{

        printf("\nMenu:\n");
        printf("1. Define Product\n");
        printf("2. Add Item to Cart\n");
        printf("3. Calculate Total\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        if (choice == 1)
		{ 
            if (itemCount < 10) 
			{
                items[itemCount] = DefineProduct();
                itemCount++;
            } 
			else 
			{
                printf("Product list is full!\n");
            }
        } 
		else if (choice == 2) 
		{ 
            AddItemToCart(items, itemCount);
        }
		else if (choice == 3) 
		{ 
            CalculateTotal(items, itemCount);
        } 
		else if (choice == 4) 
		{ 
            printf("Exiting program...\n");
        } 
		else 
		{
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


SalesSystem DefineProduct() 
{
    SalesSystem product;
    printf("Enter product name: ");
    scanf("%s", product.name);
    
    printf("Enter product price: ");
    scanf("%d", &product.price);
    
    printf("Enter product quantity: ");
    scanf("%d", &product.quantity);
    
    printf("Product added successfully!\n");
    
    return product;
}

void AddItemToCart(SalesSystem* items, int itemCount) 
{
    char name[100];
    int quantity, found = 0;

    printf("Enter the name of the product to add to the cart: ");
    scanf("%s", name);

	int i;
    for (i = 0; i < itemCount; i++) 
	{
        if (strcmp(items[i].name, name) == 0) 
		{
            printf("Enter the quantity to add: ");
            scanf("%d", &quantity);
            
            items[i].quantity += quantity;
    
            printf("Item added to the cart successfully!\n");
            
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("Product not found in the list!\n");
    }
}

void CalculateTotal(SalesSystem* items, int itemCount) 
{
    int totalCost = 0;
	int i;
    for (i = 0; i < itemCount; i++) 
	{
        totalCost = totalCost + (items[i].price * items[i].quantity);
    }
    printf("Total cost of the cart: %d\n", totalCost);
}


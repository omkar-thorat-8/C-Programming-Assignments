 #include <stdio.h>
int Discount(int);
void main() 
{
	int p;
	int Final_Price;
    Final_Price=Discount(p);
    printf("Final Price: %d \n",Final_Price);
}
int Discount(int price)
{
	
	int discount;
    char Student;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (yes/no): ");
    scanf(" %c", &Student);

    if (Student == 'y' || Student == 'Y') {
        if (price > 500) {
            discount = price * 0.2;
        } else {
            discount = price * 0.1;
        }
    } else if (Student == 'n' || Student == 'N') {
        if (price > 600) {
            discount = price * 0.15;
        }
    }

    printf("Discount: %d \n", discount);
    
    return price - discount;  
}


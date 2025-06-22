 #include <stdio.h>
void Discount(int);
void main() 
{
	int p;
    Discount(p);
}
void Discount(int price)
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
    printf("Final Price: %d \n", price - discount);

    
}


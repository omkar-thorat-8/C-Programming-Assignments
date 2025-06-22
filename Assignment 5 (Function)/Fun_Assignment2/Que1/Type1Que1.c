#include <stdio.h>
void discount();
void main() 
{
   discount(); 
}
void discount()
{
	float originalPrice, discountRate;
	int finalPrice;
	
    printf("Enter the original price of the item: ");
    scanf("%f", &originalPrice);

   
    if (originalPrice > 1000) {
        discountRate = 0.20;  // 20% discount 
    } else if (originalPrice > 500) {
        discountRate = 0.10;  // 10% discount 
    } else if (originalPrice > 100) {
        discountRate = 0.05;  // 5% discount 
    } else {
        discountRate = 0.0;   // No discount 
    }
    finalPrice = originalPrice - (originalPrice * discountRate);
 
    printf("Final price after discount: %d \n", finalPrice);
}


#include <stdio.h>
void discount(float*,float*);
void main() 
{
   float orignal,discounted;
   printf("Enter the original price of the item: ");
    scanf("%f", &orignal);

   discount(&orignal,&discounted); 
}
void discount(float* originalPrice,float* discountRate)
{
	int finalPrice;
   
    if (*originalPrice > 1000) {
        *discountRate = 0.20;  // 20% discount 
    } else if (*originalPrice > 500) {
        *discountRate = 0.10;  // 10% discount 
    } else if (*originalPrice > 100) {
        *discountRate = 0.05;  // 5% discount 
    } else {
        *discountRate = 0.0;   // No discount 
    }
    finalPrice = *originalPrice - (*originalPrice * (*discountRate));
 
    printf("Final price after discount: %d \n", finalPrice);
}


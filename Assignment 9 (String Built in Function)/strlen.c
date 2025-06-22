#include <stdio.h>
#include <string.h>

int main() {
    printf("%zu\n", strlen("Hello"));          // Output: 5
    printf("%zu\n", strlen("C Programming"));  // Output: 13
    printf("%zu\n", strlen(""));               // Output: 0
    printf("%zu\n", strlen("1234567890"));     // Output: 10
    return 0;
}


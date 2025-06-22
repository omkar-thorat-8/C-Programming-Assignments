#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";

    printf("%zu\n", strcspn(str, "o")); // Output: 4

    printf("%zu\n", strcspn(str, "x")); // Output: 11 (full length, no match)

    printf("%zu\n", strcspn(str, "H")); // Output: 0

    printf("%zu\n", strcspn(str, "W")); // Output: 6
    return 0;
}


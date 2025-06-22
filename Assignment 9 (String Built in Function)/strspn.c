#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456Hello";

    printf("%zu\n", strspn(str, "123456")); // Output: 6

    printf("%zu\n", strspn(str, "0123456")); // Output: 6

    printf("%zu\n", strspn(str, "1")); // Output: 1

    printf("%zu\n", strspn(str, "abcd")); // Output: 0
    return 0;
}


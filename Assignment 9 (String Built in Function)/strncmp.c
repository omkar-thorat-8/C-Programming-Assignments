#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strncmp("Hello", "Hello", 3)); // Output: 0

    printf("%d\n", strncmp("abc", "abd", 2));    // Output: 0

    printf("%d\n", strncmp("abc", "abd", 3));    // Output: -1

    printf("%d\n", strncmp("apple", "apricot", 4)); // Output: -1
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strcoll("abc", "abc")); // Output: 0

    printf("%d\n", strcoll("abc", "abd")); // Output: Negative Value

    printf("%d\n", strcoll("abd", "abc")); // Output: Positive Value

    printf("%d\n", strcoll("apple", "APPLE")); // Output: Depends on locale
    return 0;
}


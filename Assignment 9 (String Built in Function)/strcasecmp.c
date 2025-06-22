#include <stdio.h>
#include <strings.h>

int main() {
    printf("%d\n", strcasecmp("Hello", "hello")); // Output: 0

    printf("%d\n", strcasecmp("Hello", "Hi"));    // Output: Negative Value

    printf("%d\n", strcasecmp("apple", "APPLE")); // Output: 0

    printf("%d\n", strcasecmp("Cat", "Dog"));     // Output: Negative Value
    return 0;
}


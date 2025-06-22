#include <stdio.h>
#include <strings.h>

int main() {
    printf("%d\n", strncasecmp("HELLO", "hello", 3));   // Output: 0

    printf("%d\n", strncasecmp("abc", "abcd", 2));     // Output: 0

    printf("%d\n", strncasecmp("Apple", "apricot", 3)); // Output: -1

    printf("%d\n", strncasecmp("WORLD", "worlds", 5));  // Output: 0
    return 0;
}


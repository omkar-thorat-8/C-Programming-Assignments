#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";

    printf("%s\n", strpbrk(str, "W")); // Output: World

    printf("%s\n", strpbrk(str, "xyz")); // Output: (null)

    printf("%s\n", strpbrk(str, "lo")); // Output: llo World

    printf("%s\n", strpbrk(str, "H")); // Output: Hello World
    return 0;
}


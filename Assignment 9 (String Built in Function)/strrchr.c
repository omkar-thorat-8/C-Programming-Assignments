#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    printf("%s\n", strrchr(str, 'o')); // Output: orld

    printf("%s\n", strrchr(str, 'l')); // Output: ld

    printf("%s\n", strrchr(str, 'x')); // Output: (null)

    printf("%s\n", strrchr(str, 'H')); // Output: Hello World
    return 0;
}


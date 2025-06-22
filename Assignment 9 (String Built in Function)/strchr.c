#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    printf("%s\n", strchr(str, 'W')); // Output: World

    printf("%s\n", strchr(str, 'o')); // Output: o World

    printf("%s\n", strchr(str, 'x')); // Output: (null)

    printf("%s\n", strchr(str, 'H')); // Output: Hello World
    return 0;
}


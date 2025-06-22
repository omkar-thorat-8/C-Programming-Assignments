#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programming in C";
    printf("%s\n", strstr(str, "gram"));  // Output: gramming in C

    printf("%s\n", strstr(str, "in"));   // Output: in in C

    printf("%s\n", strstr(str, "C"));    // Output: C

    printf("%s\n", strstr(str, "Java")); // Output: (null)
    return 0;
}


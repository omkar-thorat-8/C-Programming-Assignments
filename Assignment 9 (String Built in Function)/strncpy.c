#include <stdio.h>
#include <string.h>

int main() {
    char dest[20];

    strncpy(dest, "Hello", 5);
    dest[5] = '\0'; // Ensuring null termination
    printf("%s\n", dest); // Output: Hello

    strncpy(dest, "World", 3);
    dest[3] = '\0';
    printf("%s\n", dest); // Output: Wor

    strncpy(dest, "C", 10);
    dest[1] = '\0';
    printf("%s\n", dest); // Output: C

    strncpy(dest, "", 5);
    printf("%s\n", dest); // Output: (Empty String)
    return 0;
}


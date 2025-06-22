#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    strcat(str1, " World");
    printf("%s\n", str1); // Output: Hello World

    char str2[20] = "Hi";
    strcat(str2, "!");
    printf("%s\n", str2); // Output: Hi!

    char str3[20] = "";
    strcat(str3, "Empty");
    printf("%s\n", str3); // Output: Empty

    char str4[20] = "Space";
    strcat(str4, " and Beyond");
    printf("%s\n", str4); // Output: Space and Beyond
    return 0;
}


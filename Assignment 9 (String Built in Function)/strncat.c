#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    strncat(str1, " World", 3);
    printf("%s\n", str1); // Output: Hello Wo

    char str2[20] = "Hi";
    strncat(str2, "!", 1);
    printf("%s\n", str2); // Output: Hi!

    char str3[20] = "Empty";
    strncat(str3, "Space", 2);
    printf("%s\n", str3); // Output: EmptySp

    char str4[20] = "Short";
    strncat(str4, " Example", 4);
    printf("%s\n", str4); // Output: Short Exa
    return 0;
}


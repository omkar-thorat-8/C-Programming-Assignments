#include <stdio.h>
//#include <string.h>

int main() {
    char dest[20];
    strcpy(dest, "World");
    printf("%s\n", dest); // Output: World

    char src[] = "Copy";
    strcpy(dest, src);
    printf("%s\n", dest); // Output: Copy

    strcpy(dest, "");
    printf("%s\n", dest); // Output: (Empty String)

    strcpy(dest, "Short Text");
    printf("%s\n", dest); // Output: Short Text
    return 0;
}


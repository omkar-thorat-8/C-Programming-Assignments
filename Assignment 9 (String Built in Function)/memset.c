#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Programming in C";

    memset(str, '*', 11);
    printf("%s\n", str); // Output: *********** in C

    char buffer[10];
    memset(buffer, 0, sizeof(buffer));
    printf("%d\n", buffer[0]); // Output: 0

    char array[10] = "Data";
    memset(array + 4, '-', 6);
    printf("%s\n", array); // Output: Data------

    char clear[20] = "Clear Text";
    memset(clear, 0, sizeof(clear));
    printf("%s\n", clear); // Output: (Empty String)
    return 0;
}


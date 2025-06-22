#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C,Java,Python";
    char *token = strtok(str, ",");
    while (token) {
        printf("%s\n", token); // Output: C, Java, Python
        token = strtok(NULL, ",");
    }

    char str2[] = "Split by space";
    token = strtok(str2, " ");
    while (token) {
        printf("%s\n", token); // Output: Split, by, space
        token = strtok(NULL, " ");
    }
    return 0;
}


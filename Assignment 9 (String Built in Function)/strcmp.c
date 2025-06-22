#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strcmp("abc", "abc"));   // Output: 0
    printf("%d\n", strcmp("abc", "abd"));   // Output: -1
    printf("%d\n", strcmp("abd", "abc"));   // Output: 1
    printf("%d\n", strcmp("abc", ""));      // Output: Positive Value
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld";

    memmove(str + 5, str, 5);
    printf("%s\n", str); // Output: HelloHello

    char numbers[] = {1, 2, 3, 4, 5};
    memmove(numbers + 2, numbers, 3); // Move first three bytes
    printf("%d\n", numbers[2]); // Output: 1

    char src[20] = "Example";
    memmove(src, src + 2, 5);
    src[5] = '\0';
    printf("%s\n", src); // Output: ample

    char text[20] = "OverlapTest";
    memmove(text + 4, text, 6);
    printf("%s\n", text); // Output: OverOverlap
    return 0;
}


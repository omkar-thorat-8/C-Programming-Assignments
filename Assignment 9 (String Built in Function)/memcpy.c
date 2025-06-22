#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Memory Copy";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("%s\n", dest); // Output: Memory Copy

    char numbers[] = {1, 2, 3, 4, 5};
    int buffer[5];
    memcpy(buffer, numbers, sizeof(numbers));
    printf("%d\n", buffer[0]); // Output: 1

    char str1[20] = "Example";
    memcpy(str1, "New", 3);
    printf("%s\n", str1); // Output: Newmple

    char data[] = "CopyTest";
    memcpy(data + 4, data, 4);
    printf("%s\n", data); // Output: CopyCopy
    return 0;
}


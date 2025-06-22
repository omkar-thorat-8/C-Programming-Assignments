#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("%s\n", strrev(str)); // Output: olleH

    char str2[] = "C Language";
    printf("%s\n", strrev(str2)); // Output: egaugnaL C

    char str3[] = "12345";
    printf("%s\n", strrev(str3)); // Output: 54321

    char str4[] = "!";
    printf("%s\n", strrev(str4)); // Output: !
    return 0;
}


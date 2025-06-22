#include <stdio.h>

int mystrncasecmp(char *, char *, int);

int main()
{
    char arr[50] = "Hello World";
    char brr[50] = "hello world";
    int n = 5;

    int result = mystrncasecmp(arr, brr, n);

    if (result == 0)
        printf("First %d characters are equal (case-insensitive)\n", n);
    else if (result < 0)
        printf("First %d characters of the first string are less than the second (case-insensitive)\n", n);
    else
        printf("First %d characters of the first string are greater than the second (case-insensitive)\n", n);

    return 0;
}

int mystrncasecmp(char* arr, char* brr, int n)
{
    int i = 0;

    while (i < n && arr[i] != '\0' && brr[i] != '\0')
    {
        char c1 = tolower(arr[i]);
        char c2 = tolower(brr[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    if (i < n)
        return tolower(arr[i]) - tolower(brr[i]);

    return 0;
}


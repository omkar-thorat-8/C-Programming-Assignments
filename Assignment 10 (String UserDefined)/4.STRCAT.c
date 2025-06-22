#include <stdio.h>
#include <string.h>

char* mystrcat(char *, char *);

int main()
{
    char arr[10] = "Hello ";
    char brr[10] = "World!";

    char* result = mystrcat(arr, brr);

    printf("Concatenated string: %s\n", result);

    return 0;
}

char* mystrcat(char* arr, char* brr)
{
    int i = 0, j = 0;

    while (arr[i] != '\0')
    {
        i++;
    }

    while (brr[j] != '\0')
    {
        arr[i] = brr[j];
        i++;
        j++;
    }

    arr[i] = '\0';

    return arr;
}


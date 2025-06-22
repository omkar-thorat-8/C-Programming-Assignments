#include <stdio.h>
#include <string.h>

char* mystrncat(char *, char *, int);

int main()
{
    char arr[100] = "Hello ";
    char brr[50] = "World!";
    int n = 3;

    char* result = mystrncat(arr, brr, n);

    printf("Concatenated string: %s\n", result);

    return 0;
}

char* mystrncat(char* arr, char* brr, int n)
{
    int i = 0, j = 0;

    while (arr[i] != '\0')
    {
        i++;
    }

    while (j < n && brr[j] != '\0')
    {
        arr[i] = brr[j];
        i++;
        j++;
    }

    arr[i] = '\0';

    return arr;
}


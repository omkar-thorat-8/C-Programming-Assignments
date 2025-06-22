#include <stdio.h>
#include <string.h>

char* mystrnstr(char *, char *, int);

int main()
{
    char arr[50] = "Hello How Are You.........";
    char brr[50] = "How";

    int n = 9;

    char* result = mystrnstr(arr, brr, n);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}

char* mystrnstr(char* arr, char* brr, int n)
{
    int i = 0, j = 0;

    while (arr[i] != '\0' && i < n)
    {
        while (i + j < n && arr[i + j] != '\0' && brr[j] != '\0' && arr[i + j] == brr[j])
        {
            j++;
        }

        if (brr[j] == '\0')
            return &arr[i];

        j = 0;
        i++;
    }

    return NULL;
}


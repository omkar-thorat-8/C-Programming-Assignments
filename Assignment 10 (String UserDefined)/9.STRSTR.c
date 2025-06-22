#include <stdio.h>
#include <string.h>

char* mystrstr(char *, char *);

int main()
{
    char arr[50] = "Hello how Are You.........";
    char brr[50] = "h";

    char* result = mystrstr(arr, brr);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}

char* mystrstr(char* arr, char* brr)
{
    int i = 0, j = 0;

    while (arr[i] != '\0')
    {
        while (arr[i + j] != '\0' && brr[j] != '\0' && arr[i + j] == brr[j])
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


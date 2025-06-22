#include <stdio.h>
#include <string.h>

char* mystrchr(char *, char);

int main()
{
    char arr[50] = "Hello World!";
    char ch = 'o';

    char* result = mystrchr(arr, ch);

    if (result != NULL)
        printf("Character '%c' found at: %s\n", ch, result);
    else
        printf("Character '%c' not found\n", ch);

    return 0;
}

char* mystrchr(char* arr, char ch)
{
    int i = 0;

    while (arr[i] != '\0')
    {
        if (arr[i] == ch)
            return &arr[i];
        i++;
    }

    return NULL;
}


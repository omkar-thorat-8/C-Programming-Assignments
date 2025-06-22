#include <stdio.h>
#include <string.h>

char* mystrrchr(char *, char);

int main()
{
    char arr[50] = "Hello World!";
    char ch = 'o';

    char* result = mystrrchr(arr, ch);

    if (result != NULL)
        printf("Last occurrence of character '%c' found at: %s\n", ch, result);
    else
        printf("Character '%c' not found\n", ch);

    return 0;
}

char* mystrrchr(char* arr, char ch)
{
    char* last_occurrence = NULL;
    int i = 0;

    while (arr[i] != '\0')
    {
        if (arr[i] == ch)
            last_occurrence = &arr[i];
        i++;
    }

    return last_occurrence;
}


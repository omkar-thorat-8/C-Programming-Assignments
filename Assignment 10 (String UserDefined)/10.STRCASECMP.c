#include <stdio.h>
#include <string.h>

int mystrcasecmp(char *, char *);

int main()
{
    char arr[50] = "Hello";
    char brr[50] = "hello";

    int result = mystrcasecmp(arr, brr);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("First string is less than the second\n");
    else
        printf("First string is greater than the second\n");

    return 0;
}

// Custom implementation of strcasecmp
int mystrcasecmp(char* arr, char* brr)
{
    int i = 0;

    while (arr[i] != '\0' && brr[i] != '\0')
    {
        char c1 = arr[i];
        char c2 = brr[i];

        // Convert to lowercase manually
        if (c1 >= 'A' && c1 <= 'Z')
            c1 += 'a' - 'A';
        if (c2 >= 'A' && c2 <= 'Z')
            c2 += 'a' - 'A';

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    // Compare the final characters if one string is shorter
    char c1 = arr[i];
    char c2 = brr[i];
    if (c1 >= 'A' && c1 <= 'Z')
        c1 += 'a' - 'A';
    if (c2 >= 'A' && c2 <= 'Z')
        c2 += 'a' - 'A';
	
	int result = c1 - c2;
    return result;
}


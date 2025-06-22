#include <stdio.h>

int mystrncmp(char *, char *, int);

int main()
{
    char arr[50] = "Hello World";
    char brr[50] = "Hello";

    int n = 5;

    int result = mystrncmp(arr, brr, n);

    if (result == 0)
        printf("First %d characters are equal\n", n);
    else if (result < 0)
        printf("First %d characters of the first string are less than the second\n", n);
    else
        printf("First %d characters of the first string are greater than the second\n", n);

    return 0;
}

int mystrncmp(char* arr, char* brr, int n)
{
    int i = 0;

    while (i < n && arr[i] != '\0' && brr[i] != '\0')
    {
        if (arr[i] != brr[i])
            return arr[i] - brr[i];
        i++;
    }

    if (i < n){
	
        int ans = arr[i] - brr[i];
        return ans;
    }

    return 0;
}


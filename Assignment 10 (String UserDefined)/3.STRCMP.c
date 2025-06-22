	#include <stdio.h>
//#include<string.h>
int mystrcmp(char *, char *);

int main()
{

    char arr[15] = "Hello";
    char brr[15] = "Hello";

    int result;

    result = mystrcmp(arr, brr);

    printf("Compared Result :%d", result);

    return 0;
}

int mystrcmp(char *arr, char *brr) {
    int i = 0;

    while (arr[i] != '\0' && brr[i] != '\0') {
        if (arr[i] != brr[i]) {

            return -1;
        }
        i++;
    }

    if (arr[i] == '\0' && brr[i] == '\0') {
        return 0;
    } else if (arr[i] == '\0') {
        return -1; 
    } else {
        return 1;  
    }
}

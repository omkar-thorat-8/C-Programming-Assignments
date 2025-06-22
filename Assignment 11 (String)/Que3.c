#include <stdio.h>

void main() {
    char str[100];
    printf("Enter the Character Array (String): ");
    scanf("%s", str);
    
    int n, len = 0;
    printf("Enter the Index you want to remove: ");
    scanf("%d", &n);

	int i=0;
    while (str[i] != '\0') 
	{
        len++;
        i++;
    }

    if (n < 0 || n >= len) 
	{
        printf("Invalid index!\n");
    }

    i = n;
    while (i < len) 
	{
        str[i] = str[i + 1];
        i++;
    }
    printf("Updated String: %s\n", str);
}


// Q85: Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;  // Calculate length excluding newline

    j = 0;
    for (int i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("%s\n", rev);
    return 0;
}

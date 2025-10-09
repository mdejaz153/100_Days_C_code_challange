/*Write a program to remove all vowels (a, e, i, o, u – both uppercase and lowercase) from a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if not a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';  // End the modified string

    printf("String after removing vowels: %s\n", str);

    return 0;
}

// Q93: Check if two strings are anagrams of each other. 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    char temp;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Check if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    // Sort first string
    for (i = 0; i < strlen(str1) - 1; i++) {
        for (j = i + 1; j < strlen(str1); j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    // Sort second string
    for (i = 0; i < strlen(str2) - 1; i++) {
        for (j = i + 1; j < strlen(str2); j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare both sorted strings
    if (strcmp(str1, str2) == 0)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}

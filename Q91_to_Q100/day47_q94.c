/*Q94: Find the longest word in a sentence*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100], word[20], longest[20];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence); // Note: use fgets() in safer code

    for (i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        } else {
            word[j++] = sentence[i];
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

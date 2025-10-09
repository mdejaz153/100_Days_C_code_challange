// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence); // use fgets() for safer code

    char *wordStart = sentence;
    char *ptr = sentence;

    while (*ptr) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
        ptr++;
    }

    reverseWord(wordStart, ptr - 1);

    printf("Output: %s\n", sentence);
    return 0;
}

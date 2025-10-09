// Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    gets(name); // safer alternative: fgets(name, sizeof(name), stdin);

    int i = 0;
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c.", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}

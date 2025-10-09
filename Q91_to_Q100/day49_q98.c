// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    gets(name); // safer: fgets(name, sizeof(name), stdin);

    char *token = strtok(name, " ");
    char initials[50] = "";
    char surname[50] = "";

    while (token != NULL) {
        char *next = strtok(NULL, " ");
        if (next == NULL) {
            strcpy(surname, token); // last word is surname
            break;
        } else {
            char temp[5];
            sprintf(temp, "%c.", toupper(token[0]));
            strcat(initials, temp);
        }
        token = next;
    }

    printf("%s %s\n", initials, surname);
    return 0;
}

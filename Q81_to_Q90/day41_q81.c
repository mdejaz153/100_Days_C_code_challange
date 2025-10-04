// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/

#include <stdio.h>

int main() {
    char str[1000];  // assuming maximum length 999
    fgets(str, sizeof(str), stdin); // reads input including spaces

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}

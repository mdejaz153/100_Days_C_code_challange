// Q53: Write a program to print the following pattern using nested loops (without arrays/strings):
//
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;  // maximum stars layer (5 rows in top half)

    // Upper half (including middle)
    for (i = 1; i <= n; i++) {
        // Print spaces (optional alignment, here centered pyramid not required)
        for (j = 1; j <= i * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

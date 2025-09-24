// Q52: Write a program to print the following pattern using nested loops (without arrays/strings):
//
// *
// 
// *
// * 
// * 
// 
// * 
// * 
// * 
// * 
// * 
// 
// * 
// * 
// * 
// 
// *

#include <stdio.h>

int main() {
    int i, j;

    // 1 star
    for (i = 0; i < 1; i++) {
        printf("*\n");
    }
    printf("\n");

    // 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 5 stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // 1 star
    for (i = 0; i < 1; i++) {
        printf("*\n");
    }

    return 0;
}

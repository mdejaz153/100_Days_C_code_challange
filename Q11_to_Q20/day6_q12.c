// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;
    
    // Input
    scanf("%d", &num);
    
    // Check positive, negative or zero
    if(num > 0) {
        printf("Positive\n");
    } else {
        if(num < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }
    
    return 0;
}

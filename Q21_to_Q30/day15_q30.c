// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversed = 0;
    
    // Input
    scanf("%d", &n);
    
    // Reverse calculation
    while(n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    
    // Output
    printf("%d\n", reversed);
    
    return 0;
}

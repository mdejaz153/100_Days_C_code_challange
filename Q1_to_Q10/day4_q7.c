// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    
    // Input
    scanf("%d %d", &a, &b);
    
    // Swapping without third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Output
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}

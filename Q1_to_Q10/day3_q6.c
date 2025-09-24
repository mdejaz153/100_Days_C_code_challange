// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Input
    scanf("%d %d", &a, &b);
    
    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;
    
    // Output
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}

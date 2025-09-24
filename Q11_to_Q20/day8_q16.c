// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int a, b, c, largest;
    
    // Input
    scanf("%d %d %d", &a, &b, &c);
    
    // Find largest
    if(a >= b && a >= c) {
        largest = a;
    } else if(b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    
    // Output
    printf("Largest is %d\n", largest);
    
    return 0;
}

// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input
    scanf("%d", &n);
    
    // Calculating sum
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    
    // Output
    printf("Sum=%d\n", sum);
    
    return 0;
}

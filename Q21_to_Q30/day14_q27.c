// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input
    scanf("%d", &n);
    
    // Sum of first n odd numbers
    for(int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    
    // Output
    printf("%d\n", sum);
    
    return 0;
}

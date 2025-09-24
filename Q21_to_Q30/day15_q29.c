// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    
    // Input
    scanf("%d", &n);
    
    // Factorial calculation
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    // Output
    printf("%lld\n", factorial);
    
    return 0;
}

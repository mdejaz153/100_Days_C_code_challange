// Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    
    // Input
    scanf("%d", &n);
    
    // Print numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    return 0;
}

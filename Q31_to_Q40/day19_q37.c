// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y, gcd;
    long long lcm;   // long datatype

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Use long long in multiplication
    lcm = ((long long)x * y) / gcd;

    printf("LCM = %lld\n", lcm);
    return 0;
}

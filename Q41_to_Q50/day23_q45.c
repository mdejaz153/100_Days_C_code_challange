// Q45: Write a program to find the sum of the series:
// 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i;          // 2, 4, 6, 8, ...
        int denominator = 4 * i - 1;    // 3, 7, 11, 15, ...
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}

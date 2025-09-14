// Q44: Write a program to find the sum of the series: 
// 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 1.0;  // first term fixed as 1

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}

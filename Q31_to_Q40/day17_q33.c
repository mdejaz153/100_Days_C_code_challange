// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;   // multiply remainder 'digits' times
        }

        result += power;
        temp /= 10;
    }

    if (result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

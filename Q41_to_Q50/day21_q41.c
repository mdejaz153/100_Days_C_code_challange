// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;  // last digit

    // count digits
    digits = (int)log10(n);

    first = n / (int)pow(10, digits);  // first digit

    // middle part of number (without first and last digit)
    int middle = n % (int)pow(10, digits);
    middle = middle / 10;

    // build swapped number
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}

// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {   // odd digit
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd) {
        product = 1;  // if no odd digit, product = 1
    }

    printf("%d", product);
    return 0;
}

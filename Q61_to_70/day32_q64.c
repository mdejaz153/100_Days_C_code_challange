/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int freq[10] = {0};
    while (num > 0) {
        int d = num % 10;
        freq[d]++;
        num /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}

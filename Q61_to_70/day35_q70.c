// Q70: Rotate an array to the right by k positions

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n; // Handle cases where k > n

    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}

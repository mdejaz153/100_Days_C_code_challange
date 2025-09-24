//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Input
    scanf("%f", &celsius);
    
    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;
    
    // Output
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}

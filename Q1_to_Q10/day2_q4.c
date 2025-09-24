//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area, circumference;
    
    // Input
    scanf("%f", &radius);
    
    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Output (2 decimal places)
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}

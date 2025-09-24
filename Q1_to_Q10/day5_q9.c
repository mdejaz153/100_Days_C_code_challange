// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    
    // Input
    scanf("%f %f %f", &principal, &rate, &time);
    
    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;
    
    // Calculating Compound Interest (annual compounding)
    compoundInterest = principal * (pow(1 + rate/100, time)) - principal;
    
    // Output
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    
    return 0;
}

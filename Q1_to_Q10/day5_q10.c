// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    
    // Input
    scanf("%d", &totalSeconds);
    
    // Calculations
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    
    // Output
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}

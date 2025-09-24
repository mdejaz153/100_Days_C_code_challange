// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Input
    scanf("%d %d %c", &a, &b, &op);
    
    // Calculator using switch-case
    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if(b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero error\n");
            break;
        case '%': 
            if(b != 0)
                printf("%d\n", a % b);
            else
                printf("Modulo by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }
    
    return 0;
}

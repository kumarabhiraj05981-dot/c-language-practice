#include <stdio.h>
int main() {
    int a = 10; // variable initialization
    int b = 5; // variable initialization
    int c = a + b; // addition
    int d = a - b; // subtraction   
    int e = a * b; // multiplication
    int f = a / b; // division
    int g = a % b; // modulus
    printf("Addition: %d + %d = %d\n", a, b, c);
    printf("Subtraction: %d - %d = %d\n", a, b, d);       
    printf("Multiplication: %d * %d = %d\n", a, b, e);
    printf("Division: %d / %d = %d\n", a, b, f);
    printf("Modulus: %d %% %d = %d\n", a, b, g);
    return 0;
}
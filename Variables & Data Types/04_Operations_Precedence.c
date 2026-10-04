#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;
    int result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result: %d\n", result);


    int x = 10, y = 5, z = 2;
    int result2 = (x + y) * z; // Parentheses change the order
    printf("Result2: %d\n", result2);

    int p = 3, q = 6, r = 9;
    printf("Result3: %d\n", p * q / r); // Multiplication and division have the same precedence, evaluated left to right
    printf("The value is %d\n", 3*q/2*r + 7*p); // This expression is evaluated as (((3*q)/2)*r) + (7*p)

    return 0;
}
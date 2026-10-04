#include <stdio.h>
int main() {
    float a = 9;
    int b = 2;
    float c = a / b; // type conversion from int to float
    printf("Result: %f\n", c);

    int x = 5;
    float y = 2.5;
    int z = x + y; // type conversion from float to int
    printf("Result: %d\n", z);

    int m = 7;
    float n = 3.5;
    float p = m * n; // type conversion from int to float
    printf("Result: %f\n", p);

    int q = 10;
    float r = 4.0;
    int s = q / r; // type conversion from float to int
    printf("Result: %d\n", s);
    return 0;
}
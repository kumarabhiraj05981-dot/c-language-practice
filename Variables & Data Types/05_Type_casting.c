#include <stdio.h>

int main() {

    int a = 10;

    float b = 5.5;

    int c = (int)b;

    printf("Value of a: %d\n", a);

    printf("Value of b: %.2f\n", b);

    printf("Value of c after casting: %d\n", c);

    return 0;
}
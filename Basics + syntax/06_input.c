#include <stdio.h>

int main() {

    int a;
    float b;
    char c;
    double d;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter float: ");
    scanf("%f", &b);

    printf("Enter character: ");
    scanf(" %c", &c);

    printf("Enter double: ");
    scanf("%lf", &d);

    printf("\nInteger: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.9lf\n", d);

    return 0;
}
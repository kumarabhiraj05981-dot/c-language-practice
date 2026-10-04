#include <stdio.h>
int main(){
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.123456789;
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.9lf\n", d);
}
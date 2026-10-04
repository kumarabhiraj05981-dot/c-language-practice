/*User se integer, float, character aur double input lo aur sabhi values ko 
appropriate format specifier ke saath print karo.*/


#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double e;

    printf("Enter integer value: ");
    scanf("%d", &a);
    printf("Enter float value: ");
    scanf("%f", &b);
    printf("Enter character value: ");
    scanf(" %c", &c);
    printf("Enter double value: ");
    scanf("%lf", &e);


    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Character value: %c\n", c);
    printf("Double value: %.2lf\n", e);

}
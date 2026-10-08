#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee e1;

    printf("Enter the value of code:\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary:\n");
    scanf("%f", &e1.salary);

    printf("Enter the value of name:\n");
    scanf("%14s", e1.name);

    printf("%d %.2f %s", e1.code, e1.salary, e1.name);

    return 0;
}
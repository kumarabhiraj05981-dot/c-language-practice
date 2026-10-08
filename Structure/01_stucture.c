#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee e1, e2;
    e1.code = 5044;
    strcpy(e1.name, "Harry");
    e1.salary = 85.45;

    printf("%d\n%f\n%s\n",e1.code, e1.salary, e1.name);

    return 0;
}

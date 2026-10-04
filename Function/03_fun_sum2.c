#include <stdio.h>

int sum(int , int );

int sum(int x, int y)
{
    return x + y;
}

int main() {
    int a = 10, b = 20;
    int c = sum(a,b);
    printf("Sum is %d\n",c);

    int a1 = 85, b1 = 98;
    int c1 = sum (a1,b1);
    printf("Sum is %d\n",c1);
    return 0;
}
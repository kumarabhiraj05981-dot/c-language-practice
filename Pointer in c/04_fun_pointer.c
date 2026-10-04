#include <stdio.h>

    int sum(int* ,int*);

    int sum(int* a, int* b) {
        *a = 20;
        return (*a + *b);
    }
int main() {
    int x = 10, y = 20;
    printf("the sum of a and b:  %d\n",sum(&x,&y));
    printf("The value of x is %d",x);

    return 0;
}

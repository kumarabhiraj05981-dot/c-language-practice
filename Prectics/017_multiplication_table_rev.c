#include <stdio.h>
int main() {
    int table = 10;

    for (int i = 10; i >0 ; i--)
    {
        printf("%d X %d = %d\n", table, i, table * i);
    }
    return 0;
}
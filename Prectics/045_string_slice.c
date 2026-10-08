#include <stdio.h>

char* slice(char str[], int m, int n) {
    char *ptr = &str[m];

    str[n] = '\0';

    return ptr;
}

int main() {
    char str[] = "Abhiraj";

    printf("%s", slice(str, 1, 6));

    return 0;
}
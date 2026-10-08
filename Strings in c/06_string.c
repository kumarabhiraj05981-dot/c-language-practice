#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "Abhiraj";
    char s1[56] = " Kumar";
    char s2[56] = " Gupta";

    char target[30];

    strcpy(target, st);
    strcat(target, s1);
    strcat(target, s2);

    printf("%s", target);

    return 0;
}
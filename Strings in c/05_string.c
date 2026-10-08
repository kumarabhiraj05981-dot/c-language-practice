#include <stdio.h>
#include <string.h>
int main () {
    char st[] = "Ahiraj";

    printf("%d\n", strlen(st));
    char target[30];
    strcpy(target,st);
    printf("%s\n %s",st , target);
    return 0;
}
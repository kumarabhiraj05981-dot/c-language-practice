#include <stdio.h>
#include <string.h>
int main () {
    char st[] = "Abhiraj";
    char s1[56] = " Kumar";
    char s2[56] = " Gupta";

    char target[30];
    strcpy(target, st);

    strcat(s1, s2);
    printf("%s\n",s1);

    int a = strcmp("far", "joke");
    printf("%d\n",a);

    return 0;
}
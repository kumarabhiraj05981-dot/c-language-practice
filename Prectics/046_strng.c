#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Ldq`cqd`lg`hjhHRQNldinajqt";

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        str[i] = str[i] + 1;
    }

    printf("%s", str);

    return 0;
}
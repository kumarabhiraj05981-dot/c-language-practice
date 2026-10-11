#include <stdio.h>

int main(void) {
    FILE *ptr = fopen("abhiraj.txt", "r");

    if (ptr == NULL) {
        printf("The file could not be opened.\n");
        return 1;
    }

    int num;

    for (int i = 0; i < 3; i++) {
        if (fscanf(ptr, "%d", &num) == 1) {
            printf("The value of num is %d\n", num);
        } else {
            printf("Could not read an integer.\n");
            break;
        }
    }

    fclose(ptr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 3) {
        printf("Please enter an integer greater than or equal to 3.\n");
        return 1;
    }

    int *ptr = malloc((size_t)n * sizeof *ptr);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 9;

    printf("%d\n", ptr[0]);

    free(ptr);

    return 0;
}
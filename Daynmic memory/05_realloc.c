#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int *ptr = malloc((size_t)n * sizeof *ptr);

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr[0] = 3;
    printf("%d\n", ptr[0]);

    int *temp = realloc(ptr, 10 * sizeof *ptr);

    if (temp == NULL) {
        free(ptr);
        return 1;
    }

    ptr = temp;

    free(ptr);
    return 0;
}
#include <stdio.h>

int main(void) {
    FILE *fptr = fopen("abhiraj.txt", "w");

    if (fptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    int num = 547;

    fprintf(fptr, "%d\n", num);

    fclose(fptr);

    printf("Data written to file successfully.\n");

    return 0;
}
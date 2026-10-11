#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("abhiraj.txt", "a");
    int num = 547;
    fprintf(fptr, " %d", num);

    fclose(fptr);
    return 0;
}
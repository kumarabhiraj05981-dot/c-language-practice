#include <stdio.h>
#include <stdlib.h>
int main() {
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof(float));
    ptr[0] = 76.75656;
    ptr[1] = 36.756;
    ptr[2] = 7.87;
    ptr[3] = 16.756;
    ptr[4] = 96.756;

    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);

    free(ptr);
    return 0;
}
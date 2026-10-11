#include<stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter a six value: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    return 0;
}

#include <stdio.h>
int main() {
    for (int i = 0; i < 11; i++){
        if (i == 6) {
            break;
        }
        printf("%d\n",i);
    }
}
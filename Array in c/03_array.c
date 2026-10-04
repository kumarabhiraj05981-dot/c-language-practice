#include <stdio.h>
int main() {
    float cgpa[3] = {8.0,8.22,7.96};

    for (int i = 0; i < 3; i++) {
        printf("The value of array at index %d is %2f\n",i,cgpa[i]);
    }
    return 0;
}
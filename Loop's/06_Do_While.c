#include <stdio.h>

int main() {

    int i = 5;

    do {
        printf("%d ", i);
        i--;
    } while (i > 5);

    // printf("The value of i is: %d\n", i); This line will execute even though the 
                                        // condition is false, demonstrating that the do-while loop executes at least once.

    return 0;
}
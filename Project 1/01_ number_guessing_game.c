#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomNumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed;
    
    // printf("Random Number: %d\n",randomNumber);

    do {
        printf("Guess The number: ");
        scanf("%d",&guessed);
        if (guessed>randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed<randomNumber){
            printf("Higher number please!\n");
        } else {
            printf("Congrats!");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);
    printf("You Gussed The number in %d Guesses",no_of_guesses);


    return 0;
}
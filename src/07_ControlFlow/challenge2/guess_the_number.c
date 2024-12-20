#include <stdio.h>

int main(){
    int secretNumber = 55;
    int guess = 0;
    printf("Guess the number between 1 and 100: ");
    scanf("%d", &guess);
    _Bool guessIsCorrect = 0;

    while (guessIsCorrect == 0) {
        if(guess == secretNumber) {
            printf("You guessed the correct number!\n");
            guessIsCorrect = 1;
        } else {
            printf("Your guess is too %s!\n", (guess > secretNumber) ? "high" : "low");
            printf("Guess again: ");
            scanf("%d", &guess);
        }
    }
 
    return 0;
}
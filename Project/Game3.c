#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playGame();
int main() 
{
    int choice;
    printf("\n====================================\n");
    printf("      Welcome to Guess the Number!\n");
    printf("====================================\n");
    do {
        printf("\nMenu:\n");
        printf("1. Play Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                playGame();
                break;
            case 2:
                printf("\nThank you for playing! Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}

void playGame() {
    int number, guess, attempts = 0;
    int lower = 1, upper = 100;

    // Initialize random number generator
    srand(time(0));
    number = (rand() % (upper - lower + 1)) + lower;

    printf("\nI have picked a number between %d and %d. Can you guess it?\n", lower, upper);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);
}

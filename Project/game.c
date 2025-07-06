#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char *choices[] = {"Snake", "Water", "Gun"};
    
    // Seed the random number generator
    srand(time(0));
    
    printf("Welcome to Snake, Water, Gun Game!\n");
    printf("Enter your choice:\n");
    printf("1. Snake\n");
    printf("2. Water\n");
    printf("3. Gun\n");
    printf("Your choice (1-3): ");
    scanf("%d", &userChoice);
    
    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please choose a number between 1 and 3.\n");
        return 1;
    }
    
    // Computer makes a random choice
    computerChoice = rand() % 3 + 1;
    
    printf("\nYou chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n\n", choices[computerChoice - 1]);
    
    // Determine the result
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 2) || 
               (userChoice == 2 && computerChoice == 3) || 
               (userChoice == 3 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    
    return 0;
}
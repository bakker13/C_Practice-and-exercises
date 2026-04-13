#include <stdio.h>
#include <stdlib.h> //random generator
#include <time.h> //seed for rndgen

#define userTries 5

int main () {
    
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    
    int triesLeft = userTries;
    
    for (int i = 1; i <= userTries; i++) {
        printf("\nYou have %d tries left.\n", triesLeft);
        
        printf("Enter a guess: ");
        int userNumber;
        scanf("%d", &userNumber);
        
        while (userNumber < 0 || userNumber > 20) {
            printf("\n%d is an invalid number. Choose a number between 0 - 20 !\n", userNumber);
            printf("Give a valid number: ");
            scanf("%d", &userNumber);
        }
        
        if (userNumber == randomNumber) {
            printf("\nCongratulations. You guessed it!\n");
            break;
        } else if (userNumber < randomNumber) {
            printf("Sorry, %d is wrong. My number is greater than that.\n", userNumber);
        } else if (userNumber > randomNumber) {
            printf("Sorry, %d is wrong. My number is less than that.\n", userNumber);
        }
        
        triesLeft--;
        
        if (triesLeft == 0) {
            printf("\nGame over. The number was %d.\n", randomNumber);
            break;
        }
    }
    
    return 0;
}
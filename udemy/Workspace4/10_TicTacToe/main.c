#include <stdio.h>
//#include <conio.h>
#include <stdlib.h> // system("cls"); or system("clear");
#include <string.h>

//could be better with pointers, no global var

char square[10] = { 'o' , '1' , '2' , '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

char errorMessages[50] = "";

int winCheck();
void boardDisplay();
void boardMark(char mark);

int main() {
    
    int status;
    
    char mark;
    
    player = 1;
    
    
    do {
    boardDisplay();
    
    //change turns
    player = (player % 2) ? 1 : 2; //ternary operator
    
    //get input
    printf("\n\nPlayer %d, enter a number: ", player);
    scanf("%d", &choice);
    
    //set the correct character
    mark = (player == 1) ? 'X' : 'O';
    
    //set board based on use choice or invalid input
    boardMark(mark);
    
    status = winCheck();
    
    player++;
    } while (status == -1); {
            
        if (status == 1) {
            printf("\nCongratulations Player %d, you are the winner!\n", --player);
        } else {
            printf("\nGame over. It is a draw!\n");
        }
    }
    return 0;
}

/*
 1 for game is over with result
 -1 for game is in progress
 0 game is over with no result
 */

int winCheck() {
 
    int returnValue = 0;
    
    //has a winner
    if (square[1] == square[2] && square[2] == square[3]) {
        returnValue = 1;
    } else if (square[4] == square[5] && square[5] == square[6]) {
        returnValue = 1;
    } else if (square[7] == square[8] && square[8] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[4] && square[4] == square[7]) {
        returnValue = 1;
    } else if (square[2] == square[5] && square[5] == square[8]) {
        returnValue = 1;
    } else if (square[3] == square[6] && square[6] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[5] && square[5] == square[9]) {
        returnValue = 1;
    } else if (square[3] == square[5] && square[5] == square[7]) {
        returnValue = 1;
    } else if (square[1] != '1' && square[2] != '2' && 
        square[3] != '3' && square[4] != '4' && 
        square[5] != '5' && square[6] != '6' && 
        square[7] != '7' && square[8] != '8' && 
        square[9] != '9') {
            
            //draw
            returnValue = 0;
        } else {  //game in progress
            
            returnValue = -1;
        }
        
    return returnValue;
}

void boardDisplay() {
    
    system("clear"); //because of using cygwin cannot be used Win type ("cls"), have to use Linux type
    
    printf("\n\tTic Tac Toe Game\n\n");
    
    printf("Player 1 (X)   -   Player 2 (O) \n\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);
    printf("     |     |     \n");
    
    if (strlen(errorMessages) > 0) {
        printf("\n\n%s\n", errorMessages);
    }
    
}

// set X or O
void boardMark(char mark) {
    if (choice == 1 && square[1] == '1') {
        square[1] = mark;
        strcpy(errorMessages, ""); // deleting messages
    } else if (choice == 2 && square[2] == '2') {
        square[2] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 3 && square[3] == '3') {
        square[3] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 4 && square[4] == '4') {
        square[4] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 5 && square[5] == '5') {
        square[5] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 6 && square[6] == '6') {
        square[6] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 7 && square[7] == '7') {
        square[7] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 8 && square[8] == '8') {
        square[8] = mark;
        strcpy(errorMessages, "");
    } else if (choice == 9 && square[9] == '9') {
        square[9] = mark;
        strcpy(errorMessages, "");
    } else  {
        strcpy(errorMessages, "Invalid move! Enter a valid number! "); 
        player--;
        getchar(); //have to hit a button to continue, for getch() --> need <conio.h>
    }
}
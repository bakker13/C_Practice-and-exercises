#include <stdio.h>

void squareTheNumber(int *pNumber);

int main() {

    int number = 5;
    
    printf("Original number is: %d\n", number);
    
    squareTheNumber(&number);
    
    printf("Square number is: %d\n", number);
    
    return 0;
}

void squareTheNumber(int *pNumber) { // or int *const pnumber
    
    *pNumber = (*pNumber) * (*pNumber); // or *pNumber *= *pNumber;
}
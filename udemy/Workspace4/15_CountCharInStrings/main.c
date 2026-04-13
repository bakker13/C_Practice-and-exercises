#include <stdio.h>

int calculateLength(const char *myString);

int main() {
    
    printf("The number of characters: %d\n", calculateLength("this is a test")); //14
    
    return 0;
}

int calculateLength(const char *myString) {
    
    const char *lastCharInString = myString;
    
    while (*lastCharInString) {
        lastCharInString++;
    }
    
    return lastCharInString - myString;
}
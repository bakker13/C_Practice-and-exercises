#include <stdio.h>
#include <stdbool.h>

int stringLength(const char myString[]);

void concatenateStrings(char result[], const char stringOne[], const char stringTwo[]);

bool equalStrings(const char newStringOne[], const char newStringTwo[]);


int main() {
 
    //stringLength("blablabla"); //9
    
    //char result[stringLength("Abrakadabra")];
    char result[50];
    const char stringOne[] = "Abraka";
    const char stringTwo[] = "dabra";
    concatenateStrings(result, stringOne, stringTwo);
    
    equalStrings("onetwothree","onetwo");
    equalStrings("onetwothree","onetwothree");
    equalStrings("onetwothree","threetwoone");
    
    return 0;
}

int stringLength(const char myString[]) {
    
    int count = 0;

    while (myString[count] != '\0') {
        count++;
    }
    
    //printf("The lenght of the given string is: %d\n\n", count);
    
    return count;
}

void concatenateStrings(char result[], const char stringOne[], const char stringTwo[]) {
    
    int i = 0;
    while (stringOne[i] != '\0') {
        result[i] = stringOne[i];
        i++;
    }
    
    int j = 0;
    while (stringTwo[j] != '\0') {
        result[i] = stringTwo[j];
        i++;
        j++;
    }
    
    result[i] = '\0'; 
    
    printf("The result of the 2 strings is : %s\n", result);
}

bool equalStrings(const char newStringOne[], const char newStringTwo[]) {
    
    int i = 0;
    bool isEqual = false;
    
    if (stringLength(newStringOne) != stringLength(newStringTwo)) {
        printf("Length are not equal so they are not equal.\n");
        return false;
    }
    
    
    while (newStringOne[i] == newStringTwo[i] && newStringOne[i] != '\0' &&
            newStringTwo[i] != '\0') {
                i++;
            }
    
    if (newStringOne[i] == '\0' && newStringTwo[i] == '\0') {
        isEqual = true;
    } else {
        isEqual = false;
    }
    
    printf("Same length, but are they equal? Answer: %d (0-No, 1-Yes)\n", isEqual);
    
    return isEqual;
}
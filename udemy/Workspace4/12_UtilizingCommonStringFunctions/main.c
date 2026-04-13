#include <stdio.h>
#include <string.h>

void reverseOrder();
void bubbleSort();

int main() {
    
    //reverseOrder();
    bubbleSort();
        
    return 0;
}

void reverseOrder() {
    
    char myString[50];
    
    printf("Give me a string: ");
    scanf("%s", myString); //or gets, no whitespace problem
    
    int size = strlen(myString);
    char reversedMyString[50];
    
    for (int i = size-1, j = 0; i >= 0; i--, j++) {
        reversedMyString[j] = myString[i];
    }
    //or just print original in reverse, no save to var
    
    reversedMyString[size] = '\0';
    
    printf("Original string: %s\n", myString);
    printf("Reversed string: %s\n", reversedMyString);
}

void bubbleSort() {
 
    //char myString[][50] = {"zero", "one", "two"}; //every line is a string
    char myString[][50] = {"done", "bubble", "apple", 
                            "command", "element", "good", "fun"};
    
    char temp[50];
    int size = sizeof(myString) / sizeof(myString[0]); //array_size in bytes / first memb in bytes = number of members
    
    printf("Original order of the strings: \n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", myString[i]);
    }
    
    
    for (int i = 0; i < size-1; i ++) { //avoid overflow
        for (int j = 0; j < size-i-1; j++) { //wont run out from index
            if (strcmp(myString[j], myString[j+1]) > 0) {
                //cserek
                strcpy(temp, myString[j]); //strncpy(temp, myString[j], sizeof(temp) -1), no overflow for sure
                strcpy(myString[j], myString[j+1]); //strncpy
                strcpy(myString[j+1], temp); //strncpy
            }
        }
    }
    
    printf("\nStrings after sorting: \n");
    
    for (int i = 0; i < size; i++) {
        printf("%s\n", myString[i]);
    }
}
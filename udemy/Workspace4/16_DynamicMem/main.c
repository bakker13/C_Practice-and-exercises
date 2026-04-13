#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size;
    char *userText = NULL;
    
    printf("Please enter the limit if the text: \n");
    scanf("%d", &size);
    
    userText = (char*)malloc(size * sizeof(char));
    
    if (userText != NULL) {
        printf("Enter your text: \n");
        scanf(" ");
        gets(userText);
        
        printf("Input text: %s\n", userText);
    }
    
    free(userText);

    return 0;
}
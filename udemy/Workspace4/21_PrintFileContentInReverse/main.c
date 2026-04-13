#include <stdio.h>

int main() {

    FILE *file;
    file = NULL;
    
    int counter = 0;
    
    file = fopen("myfile.txt", "r");
    
    if (!file) {
        return 1;
    }
    
    //move to the end
    fseek(file, 0, SEEK_END);
    
    //get position
    counter = ftell(file);
    
    int i = 0;
    while (i < counter) {
        i++;
        fseek(file, -i, SEEK_END); // i from the back to the beginning
        printf("%c", fgetc(file));
    }
    
    printf("\n");
    
    fclose(file);
    file = NULL;
    
    return 0;
}
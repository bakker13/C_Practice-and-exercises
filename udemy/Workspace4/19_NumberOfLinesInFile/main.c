#include <stdio.h>

int main() {

    FILE *file;
    int counter = 0;
    char c;
    
    file = fopen("myfile.txt", "r");
    
    if (file == NULL) {
        perror("Error in opening file\n");
        return (-1);
    }
    
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            counter++;
        }
    }
    
    printf("Lines of the file is: %d", counter+1); //file ends, last increment
    
    fclose(file);
    file = NULL;
    
    return 0;
}
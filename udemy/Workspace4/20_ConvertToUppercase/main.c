#include <stdio.h>
#include <ctype.h>

int main() {

    FILE *file;
    file = NULL;
    
    FILE *temp;
    temp = NULL;
    
    char c;
    
    file = fopen("myfile.txt", "r");

    if (!file) {
        return 1;
    }
    
    temp = fopen("temp.txt", "w");

    if (!temp) {
        return 1;
    }
    
    //or toupper()
    while((c = fgetc(file)) != EOF) {
        if (islower(c)) {
            c = c - 32; //ASCII, convert it to uppercase
        }
        fputc(c, temp); //to temp
    }
    
    //close before rename
    fclose(file);
    fclose(temp);
    
    //rename temp
    rename("temp.txt", "myfile.txt"); //can add check
    
    //remove temp
    remove("temp.txt"); //can add check
    
    //check
    file = fopen("myfile.txt", "r");
    
    if (!file) {
        return 1;
    }
    
    while((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }
    
    fclose(file);
    file = NULL;
    temp = NULL;
    
    return 0;
}
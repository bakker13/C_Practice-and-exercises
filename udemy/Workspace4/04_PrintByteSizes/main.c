#include <stdio.h>

int main() {

    //%zd or %u
    printf("integer size is: %zd\n", sizeof(int));
    printf("charachter size is: %zd\n", sizeof(char));
    printf("long size is: %zd\n", sizeof(long));
    printf("long long size is: %zd\n", sizeof(long long));
    printf("double size is: %zd\n", sizeof(double));
    printf("long double size is: %zd\n", sizeof(long double));
    printf("float size is: %zd\n", sizeof(float));
    printf("short size is: %zd\n", sizeof(short));
    
    
    return 0;
}
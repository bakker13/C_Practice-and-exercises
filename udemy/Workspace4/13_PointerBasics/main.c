#include <stdio.h>

int main() {

    int myNumber = 10;
    int *pNumber = NULL;
    
    pNumber = &myNumber;
    
    printf("the address of the integer myNumber: %p\n", &myNumber); // =
    printf("the address of the pointer: %p\n", &pNumber); //(void*)&pNumber
    printf("the value of the pointer: %p\n", pNumber); // =
    printf("the value of the pointer pointed to: %d\n", *pNumber);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct product
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct product *ptr);
void printItem(struct product *ptr);

int main() {

    struct product item;
    struct product *pItem;
    
    pItem = &item;
    
    pItem->itemName = (char*)malloc(30 * sizeof(char));
    if (!pItem) {
        return 1;
    }
    
    //read
    readItem(pItem);
    
    //print
    printItem(pItem);
    
    free(pItem->itemName); //only this member, malloc
    
    
    return 0;
}

void readItem(struct product *ptr) {
   
    printf("Give me product name: ");
    scanf("%s", ptr->itemName); //pointer
    
    printf("Give me the price: ");
    scanf("%f", &ptr->price); //not a pointer
    
    printf("Give me quantity: ");
    scanf("%d", &ptr->quantity);
    
    ptr->amount = ((float)ptr->quantity) * (ptr->price);
 
}

void printItem(struct product *ptr) {
    
    printf("\n---------------------------");
    printf("\nName: %s\n", ptr->itemName);
    printf("\nPrice: %.2f\n", ptr->price);
    printf("\nQuantity: %d\n", ptr->quantity);
    printf("\nTotal: %.2f\n", ptr->amount);
    printf("---------------------------\n");
    
}
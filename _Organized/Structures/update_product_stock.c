/*
 * This program demonstrates how to use a struct to represent product inventory.
 * It defines a Product structure with id, name, and stock fields.
 * The updateStock function modifies the stock of a specific product by adding a quantity.
 * The main function initializes an inventory array and updates the stock of the barcode scanner.
 */

#include <stdio.h>
#include <string.h>

struct  Product
{
    int id; 
    char name[50]; 
    int stock; 
};

void updateStock(struct Product *p, int addQuantity){
    p->stock += addQuantity; 
}

int main(){
    struct Product inventory[3] = {
        {101, "Thermal Printer", 15}, 
        {102, "Barcode Scanner", 8}, 
        {103, "Cash Drawer", 5} 
    };

    printf("Stock before update: %s has %d units. \n", inventory[1].name, inventory[1].stock);

    updateStock(&inventory[1], 12); 

    printf("Stock after update: %s has %d units.\n", inventory[1].name, inventory[1].stock); 
    return 0;
}

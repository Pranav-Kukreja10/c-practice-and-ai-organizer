/*
 * This program demonstrates the use of C structures to manage a shopping cart.
 * It defines an Item structure containing name, price, and quantity.
 * The main function initializes an array of Item structures and calculates
 * the total bill by iterating through each item, multiplying price by quantity.
 */

#include <stdio.h>

typedef struct{
    char name[20]; 
    float price; 
    int quantity; 
} Item; 

int main(){
    Item cart[3] = {
        {"Apple", 1.50, 4}, 
        {"Milk", 3.00, 2}, 
        {"Bread", 2.50, 1}, 
    }; 

    float totalBill = 0.0; 

    for (int i = 0; i < 3; i++)
    {
        float itemTotal = cart[i].price * cart[i].quantity; 
        totalBill += itemTotal;  

        printf("%s: %d x $%.2f = $%.2f\n", cart[i].name, cart[i].quantity, cart[i].price, itemTotal);
    }

    printf("TOTAL AMOUNT DUE: $%.2f\n", totalBill);
    
    return 0;
}

/*
 * This program reads a list of books with their title, price, and author.
 * It sorts the books in ascending order based on their price using a bubble sort algorithm.
 * Finally, it prints the sorted list of books with their details.
 */

#include <stdio.h>

struct book_info {
    char title[100]; 
    int price; 
    char author[100]; 
}; 

int main(){
    int n; 
    scanf("%d", &n); 
    struct book_info b[n], temp;  
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %s", b[i].title, &b[i].price, b[i].author); 
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - 1; j++)
        {
            if (b[j].price < b[j + 1].price) {
                temp = b[j]; 
                b[j] = b[j + 1]; 
                b[j + 1] = temp; 
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s\n", b[i].title, b[i].price, b[i].author); 
    }
    
    return 0;
}

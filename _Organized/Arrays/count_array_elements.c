/*
 * This program counts the number of positive, negative, and zero elements in an integer array.
 * It iterates through each element of the array and increments the respective counter based on the value.
 * Finally, it prints the counts of positives, negatives, and zeroes.
 */

#include <stdio.h>

int main(){
    int arr[7] = {4, -1, 0, 8, -5, 0, 12};

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 0){
            positive++;
        }
        else if (arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }

    printf("Positives: %d\n", positive);
    printf("Negatives: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    
    return 0;
}

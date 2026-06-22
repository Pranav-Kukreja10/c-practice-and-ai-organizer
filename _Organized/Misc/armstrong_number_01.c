/*
 * This program checks if a given number is an Armstrong number.
 * An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
 * For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
 * The algorithm extracts each digit, cubes it, and sums the results to compare with the original number.
 */

#include <stdio.h>

int isArmstrong(int num){
    int originalNum = num; 
    int remainder, result = 0; 

    while (originalNum != 0){
        remainder = originalNum % 10; 
        result += remainder * remainder * remainder; 
        originalNum /= 10; 
    }

    if (result == num){
        return 1; 
    }

    return 0;

}

int main(){
    int number; 
    printf("Enter a number: "); scanf("%d", &number); 

    if (isArmstrong(number) == 1){
        printf("%d is an Armstrong number\n", number); 
    }
    else{
        printf("%d is not an Armstrong number\n", number); 
    }
    return 0;
}

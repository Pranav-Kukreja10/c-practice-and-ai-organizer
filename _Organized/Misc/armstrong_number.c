/*
 * This program checks if a given number is an Armstrong number.
 * An Armstrong number (or narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
 * For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
 * The algorithm first counts the total number of digits, then reconstructs the number by summing each digit raised to that power count.
 */

#include <stdio.h>
#include <math.h>

int main(){
    int num; 
    printf("Enter a number: "); scanf("%d", &num);

    int n = num; 

    int digit, count = 0; 

    while (num>0){
        num = num / 10; 
        count++;
    }

    int temp, onum = n, result = 0;  

    while (onum > 0){
        temp = onum % 10;
        result += pow(temp, count); 
        onum = onum / 10;
    }

    if (n == result){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

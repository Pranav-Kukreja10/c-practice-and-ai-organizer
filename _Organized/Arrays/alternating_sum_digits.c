/*
 * This program calculates the alternating sum of digits of a given integer.
 * It extracts digits from the least significant to most significant, then processes them
 * from most significant to least significant, adding even-positioned digits and subtracting odd-positioned ones.
 * The output shows the mathematical expression and the final result.
 */

#include <stdio.h>

int main(){
    int num = 12345; 
    int digits[10]; 
    int count = 0; 

    int temp = num; 
    while (temp > 0) {
        digits[count] = temp % 10; 
        temp = temp / 10; 
        count++; 
    }

    int result = 0;
    int position = 0; 

    for (int i = count - 1; i>=0 ; i--)
    {
        if (position % 2 == 0){
            result += digits[i]; 

            if (position == 0) {
                printf("%d ", digits[i]); 
            }
            else{
                printf("+ %d ", digits[i]); 
            }
        }

        else{
            result -= digits[i]; 
            printf("- %d ", digits[i]);
        }

        position++; 
    }

    printf("= %d\n", result); 
    
    return 0;
}

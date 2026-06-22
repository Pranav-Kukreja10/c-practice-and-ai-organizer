/*
 * This program reads multiple test cases.
 * For each test case, it reads m integers and calculates their sum (sum1).
 * Then it reads n integers and calculates their sum (sum2).
 * Finally, it prints the difference between sum1 and sum2.
 */

#include <stdio.h>

int main(){
    int t; 
    scanf("%d", &t);
    
    while (t--) {
        int m, n; 
        long long sum1 = 0, sum2 = 0, val; 
        scanf("%d %d", &m, &n); 

        for (int i = 0; i < m; i++)
        {
            scanf("%lld", &val);
            sum1 += val; 
        }

        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &val); 
            sum2 += val; 
        }

        printf("%lld\n", sum1 - sum2); 
        
        
    }


    return 0;
}

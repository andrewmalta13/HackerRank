//Andrew Malta 11/23/14
/*You are given a number N. Find the digits in this number
that exactly divide N and display their count. For N = 24, 
there are 2 digits - 2 & 4. Both these digits exactly divide 24. 
So our answer is 2. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void generateDigitArray(char *digits, long long n){
    for(int i = 0; i < 9; i++){
        digits[i] = 0;
    }

    for(int i = 1; i < 10; i++){
        if((n % i) == 0) digits[i-1] = 1; 
    }
}

int numDigitDivisors(char *d, long long n){
    int count = 0;
    while(n > 0){
        if(d[(n % 10) -1]) count ++;
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    char *digits = malloc(sizeof(char) * 9);
    for(int i = n; i>0; i--){
        long long num;
        scanf("%lld", &num);
        generateDigitArray(digits, num);
        printf("%d \n", numDigitDivisors(digits, num));
    }
    free(digits);
    return 0;
}



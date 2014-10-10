//Andrew Malta 10/7/14
//The problem is here: https://www.hackerrank.com/challenges/halloween-party
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numTestCases;
    unsigned long numCuts;
    
    scanf("%d", &numTestCases);
    
    
    for(int i = numTestCases; i > 0; i--){
        scanf("%lu", &numCuts);
        unsigned long numPieces = (unsigned long) ((numCuts / 2) * (numCuts - (numCuts/2))); 
        printf("%lu \n", numPieces);
    }
      
    return 0;
}

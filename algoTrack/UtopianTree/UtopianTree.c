// Andrew Malta 10/6/14

//Problem found here: https://www.hackerrank.com/challenges/utopian-tree


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    
    int n;
    
    for(int j = t; j > 0 ;j--){ // the loop that determines how many inputs we will read.
        scanf("%d", &n); //read the next input 
        int height = 1;
        
        for(int i = 1; i <= n; i++){
            if((i%2) == 1) 
                height *= 2; //odd cycle and therefore we double 
            else 
                height += 1; //even cycle, add 1.
            
             
        }
        
        printf("%d \n", height); //print the computer height.
        
        
        
    }
    return 0;
}

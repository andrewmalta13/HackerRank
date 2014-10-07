//Andrew Malta 10/6/14
//problem can be found here: https://www.hackerrank.com/challenges/service-lane
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, t; // n is length of highway and t is number of test cases
    int i, j; // the indices in question for a test case.
    
    scanf("%d %d" , &n, &t); 

    int width[n];
    for(int index = 0; index < n; index++){
        scanf("%d", &width[index]);
    }

    for(int k = t; k > 0; k--){
        scanf("%d %d", &i, &j); //indices of the width road.
        int LargestVehicle = 3;

        for(int l = i ;l <= j; l++){
            if(width[l] < LargestVehicle) LargestVehicle = width[l];
        }

        printf("%d \n", LargestVehicle);

    }
    
    return 0;
}

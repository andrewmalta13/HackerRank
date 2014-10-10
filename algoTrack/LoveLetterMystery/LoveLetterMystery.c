//Andrew Malta 10/7/14
//problem found here: https://www.hackerrank.com/challenges/the-love-letter-mystery
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int numTestCases;
    char loveLetter[10000];

    scanf("%d", &numTestCases);

    

    for(int i = numTestCases; i > 0; i--){
      scanf("%s", loveLetter);
      int stringSize = strlen(loveLetter);

      int numSteps = 0;

      for(int j = 0; j < (stringSize / 2); j++){ //works for odd and even sized strings.
          numSteps += abs(loveLetter[j] - loveLetter[(stringSize - 1) - j]); // the difference in ASCII values between the two
                                                                       // corresponding letters in the string.  
      }
      printf("%d \n", numSteps);
    }

    return 0;
}
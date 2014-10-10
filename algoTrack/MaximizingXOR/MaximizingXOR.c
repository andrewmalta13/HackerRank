//Andrew Malta 10/7/14
//problem found here: https://www.hackerrank.com/challenges/maximizing-xor
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int XOR(int val1, int val2);

int main() {
  int L, R;

  scanf("%d", &L);
  scanf("%d", &R);
  
  int max = 0;

  for(int i = L; i <= R; i++){
    for(int j = L; j <= R; j++){
      int result = XOR(i,j);
      if(result > max) max = result;
    }
  }
  
  printf("%d \n", max);

  return 0;
}

//returns the bitwise exclusive or on val1 and val2. Using NOT, ANd, and OR 
// for fun :)
int XOR(int val1, int val2){
  if(val1 == val2) return 0;

  return (~(val1 & val2) & (val1 | val2));
   

}
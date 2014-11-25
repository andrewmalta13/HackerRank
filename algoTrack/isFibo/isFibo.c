#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool isSquare(__int128 n){  
  __int128 root = (unsigned long long)sqrt(n);

  if((root * root) == n) return(true);
  else return(false);
}

bool isFibo(__int128 num){
  return(isSquare(5*num*num - 4) || isSquare(5*num*num +4));
}


int main(){
  int numTestCases;
  scanf("%d", &numTestCases);

  for(int i = numTestCases; i > 0; i--){
    unsigned long long num;
    scanf("%lld", &num);
    if(isFibo((__int128)num)) printf("%s", "IsFibo \n");
    else printf("%s", "IsNotFibo \n");
  }

  return 0;
}
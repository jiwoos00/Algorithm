#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fac(int N){
  if (N==0) return 0;
  if (N>2){
    return fac(N-1)+fac(N-2);
  }
  return 1;
}

int main(){
  int N;
  scanf("%d",&N);
  
  N=fac(N);
  printf("%d\n",N);
  
  return 0;
}
    



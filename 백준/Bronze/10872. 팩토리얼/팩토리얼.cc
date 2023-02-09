#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fac(int N){

  if (N>1){
    return N*fac(N-1);
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
    



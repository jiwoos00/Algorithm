#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int isPrimeNumber(int x){
  int end=(int)sqrt(x);
  for (int i=2; i<=end; i++){
    if (x%i==0) return 0;
  }
  return 1;
}


int main(void) {
  int M,N;
  int i,j;
  int count=0;

  scanf("%d %d",&M,&N);

  
  for (i=M; i<=N; i++){
    if (i==1){ continue; }
    if(isPrimeNumber(i)){
      printf("%d\n",i);
    }
  }
  return 0;
}
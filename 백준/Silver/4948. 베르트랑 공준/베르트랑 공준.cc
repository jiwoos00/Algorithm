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
  int num;
  int count=0;
  
  while(1){
    scanf("%d",&num);
    if (num==0) break;
    count=0;
    
    for (int i=num+1; i<=2*num; i++){
      count+=isPrimeNumber(i);
    }
    printf("%d\n",count);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int N;
  
  scanf("%d",&N);
  int arr[10]={0,};

  while(N>0){
    arr[N%10]++;
    N/=10;
  }

  for (int i=9; i>=0; i--){
    if (arr[i]>0){
      for (int j=0; j<arr[i]; j++){
        printf("%d",i);
      }
    } 
  }
  
  return 0;
  
}



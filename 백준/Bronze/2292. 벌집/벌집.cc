#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

  int num;
  int sum=1;
  int i=1;
  
  scanf("%d",&num);

  while(1){
    if (num==1){
      printf("1\n");
      break;
    }
    sum+=6*i;
    if (sum>=num){
      printf("%d\n",i+1);
      break;
    }
    i++;
  }
  return 0;
  
}
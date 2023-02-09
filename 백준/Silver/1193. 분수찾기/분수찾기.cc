#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

  int num, i=1, b=1;

  scanf("%d",&num);
  
  while(1){
    if (num<=b){
      break;
    } 
    ++i;
    b+=i;
  }

  if (i%2==0){
    //짝수
    printf("%d/%d\n",i-(b-num), 1+(b-num));
  }
  else {
    printf("%d/%d\n",1+(b-num), i-(b-num));
  }
  return 0;
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int series(int n){
  int sum=0;

  if (n<100){
    sum+=n;
    return sum;
  }

  while(n>100){
    if((n/100)-((n/10)%10)==((n/10)%10)-(n%10)){
      sum++;
    }

    n--;
  }
  return sum+99;
  
}

int main(){
  int num;
  scanf("%d",&num);

  printf("%d\n",series(num));
}
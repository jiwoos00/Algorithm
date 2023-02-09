#include <stdio.h>

int main(void) {
  int num,count=0;
  scanf("%d",&num);

  while(num>0){
    if (num%5==0){
      num-=5;
      count++;
    }
    else if (num%3==0){
      num-=3;
      count++;
    }
    else if (num>5){
      num-=5;
      count++;
    }
    else if (num>3){
      num-=3;
      count++;
    }
    else {
      count=-1;
      break;
    }
  }
  
  printf("%d\n",count);
  
  return 0;
}
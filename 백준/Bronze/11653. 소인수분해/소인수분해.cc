#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int num;
  int i=2;
  scanf("%d",&num);

  while(num>1){
    if (num%i==0){
      num=num/i;
      printf("%d\n",i);
      i=2;
    }
    else i++;
  }
  return 0;
}
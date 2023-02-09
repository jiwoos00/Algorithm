#include <stdio.h>
#include <string.h>

int main(void) {

  int num,num_c=0;
  int num0,num1,count=0;
  
  scanf("%d",&num);

  num_c=num;
  while(1){
    num0=num_c/10;
    num1=num_c%10;

    num_c=(num1*10)+((num0+num1)%10);
    count++;

    if (num_c==num) break;
  }

  printf("%d\n",count);
  return 0;
}
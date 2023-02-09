#include <stdio.h>
#include <string.h>

int main(void) {

  int a0=1;
  int b0=1;
  int c0=2;
  int d0=2;
  int e0=2;
  int f0=8;

  int a1,b1,c1,d1,e1,f1=0;
  
  scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&d1,&e1,&f1);
  printf("%d %d %d %d %d %d\n",a0-a1,b0-b1,c0-c1,d0-d1,e0-e1,f0-f1);
  
  return 0;
}
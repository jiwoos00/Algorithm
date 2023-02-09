#include <stdio.h>
#include <string.h>

int main(void) {

  int h,m=0;

  scanf("%d %d",&h,&m);

  m=m-45;

  if (m<0){
    h--;
    m=60+m;
  }
  if (h<0){
    h=24+h;
  }

  printf("%d %d\n",h,m);
  
  return 0;
}
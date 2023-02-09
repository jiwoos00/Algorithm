#include <stdio.h>
#include <string.h>

int main(void) {

  int h,m1,m2=0;

  scanf("%d %d\n",&h,&m1);
  scanf("%d",&m2);

  int m3=m1+m2;

  while (m3>=60){
    h++;
    m3=m3-60;
    if (h>=24){
      h=24-h;
    }
  }
  

  printf("%d %d\n",h,m3);
  
  return 0;
}
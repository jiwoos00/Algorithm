#include <stdio.h>
#include <string.h>

int main(void) {

  int num,a,b=0;
  
  scanf("%d",&num);

  for (int i=0; i<num; i++){
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
  }
  
  return 0;
}
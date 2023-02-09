#include <stdio.h>
#include <string.h>

int main(void) {

  int a,b=0;
  
  while(scanf("%d %d",&a,&b)!=EOF){
    printf("%d\n",a+b);
  }
  
  return 0;
}
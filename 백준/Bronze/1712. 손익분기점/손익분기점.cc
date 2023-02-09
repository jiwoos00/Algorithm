#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  
  if (b>=c){
    printf("-1\n");
    return 0;
  }
  printf("%d\n",a/(c-b)+1);
  
  
  return 0;
}

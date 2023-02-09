#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  char a[4], b[4];
  char tmp;


  scanf("%s %s",a,b);

  tmp=a[0];
  a[0]=a[2];
  a[2]=tmp;
  
  tmp=b[0];
  b[0]=b[2];
  b[2]=tmp;

  if (strcmp(a,b)>0){
    printf("%s\n",a);
  }
  else {
    printf("%s\n",b);
  }

  return 0;
}

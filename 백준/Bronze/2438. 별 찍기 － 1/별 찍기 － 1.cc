#include <stdio.h>
#include <string.h>

int main(void) {

  int num=0;
  
  scanf("%d",&num);

  for (int i=1; i<=num; i++){
    for (int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {

  int num[10];
  int max=0,max_i=0;

  for (int i=1; i<=9; i++){
    scanf("%d",&num[i]);

    if (max<num[i]){
      max=num[i];
      max_i=i;
    }
  }
  
  printf("%d\n%d\n",max,max_i);
  
  return 0;
}
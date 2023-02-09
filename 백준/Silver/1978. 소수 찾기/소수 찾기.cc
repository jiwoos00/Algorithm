#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int p_num,num=0;
  int i,j;
  int count=0;
  
  scanf("%d",&num);

  for (i=0; i<num; i++){
    scanf("%d",&p_num);
    if (p_num==1){
      count++;
    }
    for (j=2; j<p_num; j++){
      if(p_num%j==0){
        count++;
        break;
      }
    }
    
  }
  printf("%d\n",num-count);
  
  return 0;
}
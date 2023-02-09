#include <stdio.h>
#include <string.h>

int main(void) {

  int num,sum0,a,b=0;
  int sum1=0;

  scanf("%d %d",&sum0,&num);

  for (int i=0; i<num; i++){
    scanf("%d %d",&a,&b);
    sum1+=a*b;
  }
  
  if (sum0==sum1){
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  
  return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int M,N;
  int i,j;
  int count=0;
  int sum=0,min=9999;
  
  scanf("%d %d",&M,&N);

  for (i=M; i<=N; i++){
    if (i==1){
      continue;
    }
    count=0;
    for (j=2; j<i; j++){
      if (i%j==0){
        count=1;
        break;
      }
    }
    if (count==0){
      sum+=i;
      if (min>i){
        min=i;
      }
    }
  }

  if (sum==0){
    printf("-1\n");
  }
  else printf("%d\n%d\n",sum,min);
  return 0;
}
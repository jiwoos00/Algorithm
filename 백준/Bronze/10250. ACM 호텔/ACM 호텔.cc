#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int H,W,N,num;
  int i,j,k;
  scanf("%d",&num);

  for (i=0; i<num; i++){
    scanf("%d %d %d",&H,&W,&N);
    if (N%H==0){
      printf("%d%02d\n",H,N/H);
    }
    else printf("%d%02d\n",N%H, (N/H)+1);
  }
  return 0;
}
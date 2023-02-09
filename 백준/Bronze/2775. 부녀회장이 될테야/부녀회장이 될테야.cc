#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int a,b,i,j,k,num;

  int sum[15][15]={0,};
  for (i=0; i<15; i++){
    sum[0][i]=i;
  }

  for (i=1; i<15; i++){
    for (j=1; j<15; j++){
      for (k=1; k<=j; k++){
        sum[i][j]+=sum[i-1][k];
      }
    }
  }
  
  
  scanf("%d",&num);
  for (i=0; i<num; i++){
    scanf("%d %d",&a,&b);
    printf("%d\n",sum[a][b]);
  }
  return 0;
}
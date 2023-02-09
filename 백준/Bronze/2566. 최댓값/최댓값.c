#include <stdio.h>

int main(){

  int num[9][9];
  int i,j;
  
  for (i=0; i<9; i++){
    for (j=0; j<9; j++){
      scanf("%d",&num[i][j]);
    }
  }

  int max=num[0][0];
  int row=0, heat=0;
  for (i=0; i<9; i++){
    for (j=0; j<9; j++){
      if (max<num[i][j]){
        max=num[i][j];
        row=i;
        heat=j;
      }
    }
  }

  printf("%d\n%d %d\n",max,row+1,heat+1);
  return 0;
  
}
#include <stdio.h>
#include <stdlib.h>

int main(){

  int num=0;
  int n[100][100]={0,};
  int i,j,k;
  int a,b;
  int sum=0;

  scanf("%d",&num);
  
  for (i=0; i<num; i++){
    scanf("%d %d",&a,&b);
    for (j=a; j<a+10; j++){
      for (k=b; k<b+10; k++){
        if (!n[j][k]){
          sum++;
          n[j][k]=1;
        }
      }
    }
  }

  printf("%d\n",sum);

  return 0;
  
}
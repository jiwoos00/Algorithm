#include <stdio.h>

int main(void){

  int i,j,k;
  int cnt,num;
  
  int arr[10000]={0,};
  arr[0]=1; arr[1]=1;

  for (i=2; i<10000/2; i++){
    for (j=i*i; j<10000; j++){
      if (j%i==0) arr[j]=1;
    }
  }

  scanf("%d", &cnt);
  while(cnt--){
    scanf("%d",&num);
    for (i=num/2; i>1; i--){
      if (arr[i]==1) continue;

      for (j=num/2; j<=num; j++){
        if (arr[j]==1) continue;
        if (i+j==num) goto OUT;
      }
    }
  OUT : printf("%d %d\n",i,j);
  }
  return 0;
}



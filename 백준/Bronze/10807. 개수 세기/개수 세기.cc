#include <stdio.h>

int main(){
  int arr[201]={0,};
  int N,i,num;

  scanf("%d",&N);

  for (i=0; i<N; i++){
    scanf("%d",&num);
    arr[num+100]++;
  }

  int res=0;
  scanf("%d",&res);
  printf("%d\n", arr[res+100]);
  
}
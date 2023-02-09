#include <stdio.h>

int main(){
  int arr[31]={0,};
  int i,num,n=28;

  for (i=0; i<n; i++){
    scanf("%d",&num);
    arr[num]++;
  }

  for (i=1; i<=30; i++){
    if (arr[i]==0){
      printf("%d\n",i);
    }
  }
  
}
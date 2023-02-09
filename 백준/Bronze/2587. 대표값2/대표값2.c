#include <stdio.h>
#include <stdlib.h>

int main(){

  int avg,med;
  int i,j,temp,sum=0;
  int num[5];

  for (i=0; i<5; i++){
    scanf("%d",&num[i]);
    sum+=num[i];
  }

  for (i=0; i<5; i++){
    for (j=0; j<5; j++){
      if (num[i]>num[j]){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }

  avg=sum/5;
  med=num[2];

  printf("%d\n%d\n",avg,med);
  return 0;
  
}
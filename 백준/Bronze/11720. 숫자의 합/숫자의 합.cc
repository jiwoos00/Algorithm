#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  int num;
  int i,sum=0;
  scanf("%d",&num);

  char arr[num];
  scanf("%s",arr);

  for (i=0; i<num; i++){
    sum+=arr[i]-'0';
  }
  printf("%d\n",sum);
}
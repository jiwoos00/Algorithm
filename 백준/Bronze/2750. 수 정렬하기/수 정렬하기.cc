#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(void) {
  int num;
  int i,j;
  
  scanf("%d",&num);
  
  int arr[num];

  for (i=0; i<num; i++){
    scanf("%d",&arr[i]);
  }

  for (i=0; i<num; i++){
    for (j=i+1; j<num; j++){
      if (arr[i]>arr[j]){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
      }
    }
  }

  for (i=0; i<num; i++){
    printf("%d\n",arr[i]);
  }

  
}


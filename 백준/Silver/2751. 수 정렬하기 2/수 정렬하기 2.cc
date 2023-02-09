#include <stdio.h>
#include<stdlib.h>

int compare(const void *one,const void *two){
	if(*(int *)one>*(int *)two)
		return 1;
	else if(*(int *)one<*(int*)two)
		return -1;
	else return 0;
}


int main(void){

  int N;
  int i,j;

  scanf("%d",&N);
  int arr[N];

  for (i=0; i<N; i++){
    scanf("%d",&arr[i]);
  }

  qsort(arr,N,sizeof(int),compare);

  for (i=0; i<N; i++){
    printf("%d\n",arr[i]);
  }
  
  
  return 0;
}



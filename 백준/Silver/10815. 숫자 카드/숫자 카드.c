#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2){
  if (*(int*)num1 < *(int*)num2){
    return -1;
  }
  if (*(int*)num1 > *(int*)num2){
    return 1;
  }
  else return 0;
}

int binary_search(int *arr, int N, int num){
  int start=0;
  int end=N;
  int mid=(start+end)/2;

  while(start<=end){
    if (arr[mid]==num){
      return 1;
    }
    else if (arr[mid]<num){
      start=mid+1;
    }
    else
      end=mid-1;

    mid=(start+end)/2;
  }
  return 0;
}

int main(){
  int *arr1, *arr2;
  int N,M;
  int i;

  scanf("%d",&N);
  arr1=(int*)malloc(sizeof(int)*N);

  for (i=0; i<N; i++){
    scanf("%d",&arr1[i]);
  }

  scanf("%d",&M);
  arr2=(int*)malloc(sizeof(int)*M);

  for (i=0; i<M; i++){
    scanf("%d",&arr2[i]);
  }
  qsort(arr1, N, sizeof(int), compare);

  for (i=0; i<M; i++){
    if (binary_search(arr1, N, arr2[i])){
      printf("1 ");
    }
    else {
      printf("0 ");
    }
  }
  
}

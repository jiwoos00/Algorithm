#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *one,const void *two){
	if(*(int *)one>*(int *)two)
		return 1;
	else if(*(int *)one<*(int*)two)
		return -1;
	else return 0;
}

int main(void){

  int N,k,num;
  int i, idx, sum1, max=0, chk=0;
  double sum=0;
  int num1,num2,num3,num4;

  scanf("%d",&N);  
  int arr[N];
  int cnt[8001]={0,};
  
  for (i=0; i<N; i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    cnt[arr[i]+4000]++;

    if (cnt[arr[i]+4000]>max){
      max=cnt[arr[i]+4000];
    }
  }

  for (i=0; i<8001; i++){
    if (cnt[i]==0) continue;
    if (cnt[i]==max){
      if (chk==1){
        idx=i;
        break;
      }
      else if (chk==0){
        idx=i;
        chk=1;
      }
    }
  }
  idx=idx-4000;

  qsort(arr,N,sizeof(int),compare);

  sum1=round(sum/N);

  printf("%d\n",sum1);
  printf("%d\n",arr[N/2]);
  printf("%d\n",idx);
  printf("%d\n",arr[N-1]-arr[0]);
  
  
  return 0;
}



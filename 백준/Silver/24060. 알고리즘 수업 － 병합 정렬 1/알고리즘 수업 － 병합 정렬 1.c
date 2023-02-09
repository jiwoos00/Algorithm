#include <stdio.h>
#define NUM 500000
int sorted[NUM];
int num, count=0;

void merge(int list[], int left, int mid, int right){
    int i,j,k,l;
    i=left; //왼쪽 배열의 첫 인덱스
    j=mid+1; //오른쪽 배열의 첫 인덱스
    k=left; //임시 배열 인덱스

    // 합병
    while(i<=mid && j<=right){
        if (list[i]<=list[j]){
            sorted[k++]=list[i++];
        }
        else {
            sorted[k++]=list[j++];
        }
        
    }

    if (i>mid){ // 오른쪽 배열의 남아있는 값
        for (l=j; l<=right; l++){
            sorted[k++]=list[l];
        }
    }
    else { // 왼쪽 배열의 남아있는 값
        for (l=i; l<=mid; l++){
            sorted[k++]=list[l];
        }
    }

    // 임시배열(sorted) 리스트를 배열 list로 복사
    for (l=left; l<=right; l++){
        list[l]=sorted[l];
        count++;
        if (count==num){
          printf("%d\n",list[l]);
        }
    }
}

void merge_sort(int list[], int left, int right){
    int mid;

    if (left<right){
        mid=(left+right)/2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);
    }
}



int main(){
    int i;
    int n;

    scanf("%d %d", &n, &num);
    int list[n];

    for (i=0; i<n; i++){
      scanf("%d",&list[i]);
    }

    // left : 배열의 시작, right : 배열의 끝
    merge_sort(list, 0, n-1);

    if (count<num){
      printf("-1\n");
    }
    return 0;
}
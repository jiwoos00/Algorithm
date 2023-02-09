#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100000

char res[SIZE*2];
int stack[SIZE];
int top=-1;

int main(void){
    int n=0;
    scanf("%d",&n);
    
    int *arr=(int*)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int num=1;
    int idx=0;
    int res_idx=0;
    
    while(1){
        //스택에 있는 수가 배열 숫자보다 낮은 경우, push
        if (top==-1 || stack[top]<arr[idx]){
            stack[++top]=num++;
            res[res_idx++]='+';
        }
        
        //스택에 있는 수가 배열 숫자와 같은 경우, pop
        else if (stack[top]==arr[idx]){
            top--;
            res[res_idx++]='-';
            idx++;
        }
        
        //스택의 수가 배열숫자보다 높을 경우, 만들 수 없음
        else {
            printf("NO\n");
            return 0;
        }
        
        if (res_idx==n*2) break;
    }
    for (int i =0; i<res_idx; i++){
        printf("%c\n",res[i]);
    }
    return 0;
}

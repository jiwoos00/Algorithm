
#include <stdio.h>

int main(void) {
 
    int N,X,i,j;
    scanf("%d %d",&N, &X);
    
    int arr[N];
    
    for (i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<N; i++){
        if(arr[i]<X) printf("%d ",arr[i]);
    }
   
    printf("\n");
  
    return 0;
}

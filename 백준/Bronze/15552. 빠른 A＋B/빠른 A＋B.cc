#include <stdio.h>

int main(void) {
 
    int a,i;
    scanf("%d",&a);
    
    int arr1[a];
    int arr2[a];
    
    for (i=0; i<a; i++){
        scanf("%d %d",&arr1[i],&arr2[i]);
    }
    
    for (i=0; i<a; i++){
        printf("%d\n",arr1[i]+arr2[i]);
    }

   
  
    return 0;
}

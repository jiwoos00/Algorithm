
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void) {
 

    int arr[11]={0,};
    int a,b,c,sum,i=0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    sum=a*b*c;

    
    while(sum>0){
        i=sum%10;
        arr[i]++;
        sum/=10;
        
    }
   
    for (i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

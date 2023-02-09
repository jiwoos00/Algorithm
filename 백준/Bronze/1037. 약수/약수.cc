#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,i;
    int max=2, min=1000000;
    scanf("%d",&num);
    
    int n[num];
    for (i=0; i<num; i++){
        scanf("%d",&n[i]);
        if (n[i]>=max) max=n[i];
        if (n[i]<=min) min=n[i];
    }
    printf("%d\n",max*min);
    
    return 0;
}

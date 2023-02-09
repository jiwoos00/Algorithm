
#include <stdio.h>
#include <limits.h>

int main(void) {
 
    int num,i;
    scanf("%d",&num);
    
    int n[num];
    int max=-1000001;
    int min=1000001;
    
    for (i=0; i<num; i++){
        scanf("%d",&n[i]);
        if (max<n[i]) max=n[i];
        if (min>n[i]) min=n[i];
    }
    
    
    printf("%d %d\n",min,max);
    return 0;
}

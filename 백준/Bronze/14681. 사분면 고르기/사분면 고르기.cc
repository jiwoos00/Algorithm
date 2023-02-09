
#include <stdio.h>

int main(void) {
 
    int a,b;
    scanf("%d %d",&a,&b);
    
    if (b>0){
        if (a>0) printf("1\n");
        else printf("2\n");
    }
    else if (b<0){
        if (a>0) printf("4\n");
        else printf("3\n");
    }
    return 0;
}

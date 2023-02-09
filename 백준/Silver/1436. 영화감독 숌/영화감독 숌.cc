//백준문제풀이

#include <stdio.h>
#define small(x,y)x<y?x:y

int main(void){

    int i,temp,ck,count=0;
    int num=0;
    scanf("%d",&num);
    
    if (num==1){
        printf("666\n");
        return 0;
    }
    
    count=1;
    for (i=667;; i++){
        temp=i;
        ck=0;
        while(temp){
            if (temp%1000==666){
                ck=1;
            }
            temp/=10;
        }
        if (ck){
            count++;
            if (count==num) break;
        }
    }
    printf("%d\n",i);
    return 0;
}



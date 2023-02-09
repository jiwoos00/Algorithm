#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int make(int num){
    int i=1;
    int a=0;
    int sum=0;
    
    /*
     1=1
     198 + 1 + 9 + 8
     */
    
    while(1){
        sum+=i;
        a=i;
        
        while(a>0){
            sum+=a%10;
            a/=10;
        }
        
        
        if (sum==num) return i;
        if (i>=num) break;
        
        i++;
        sum=0;
    }
    
    
    
    return 0;
}

 int main() {
     int num=0;
     scanf("%d",&num);
     
     int res=make(num);
     printf("%d\n",res);
     return 0;
 }

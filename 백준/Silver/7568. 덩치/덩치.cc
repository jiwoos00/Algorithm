#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
 (몸무게,키)
 k명이 더 크면, 등수는 k+1
 
 */
int make(int num){
    int i=1;
    int a=0;
    int sum=0;
    
   
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
    
     int w_max,h_max=0;
     int num=0;
     int i,j=0;
     
     scanf("%d",&num);
     int x[num], y[num];
     
     for (i=0; i<num; i++){
         scanf("%d %d",&x[i],&y[i]);
     }
     int k=0;
     
     for (i=0; i<num; i++){
         k=0;
         for (j=0; j<num; j++){
             if (x[i]<x[j] && y[i]<y[j]) k++;
         }
         printf("%d ",k+1);
     }
     printf("\n");
     return 0;
 }

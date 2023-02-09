#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



 int main() {
     int i,j,k=0;
     
     int num, sum=0;
     scanf("%d %d",&num,&sum);
     
     int n[num];
     for (i=0; i<num; i++){
         scanf("%d",&n[i]);
     }
     
     int a;
     int max=0;
     for (i=0; i<num; i++){
         for (j=i+1; j<num; j++){
             for (k=j+1; k<num; k++){
                 a=n[i]+n[j]+n[k];
                 if (max<a && sum>=a) max=a;
             }
         }
     }
     printf("%d\n",max);
     return 0;
 }

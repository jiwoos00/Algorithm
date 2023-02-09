#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


 void hanoi_tower(int n, int from, int tmp, int to) {
     if (n == 1) {
         printf("%d %d\n", from, to);
     }
     else {
         hanoi_tower(n - 1, from, to, tmp);
         printf("%d %d\n",from, to);
         hanoi_tower(n - 1, tmp, from, to);
     }
 }
 int main() {
     int num=0;
     
     scanf("%d",&num);
     printf("%d\n",(int)pow(2,num)-1);
     
     hanoi_tower(num,1,2,3);
     return 0;
 }

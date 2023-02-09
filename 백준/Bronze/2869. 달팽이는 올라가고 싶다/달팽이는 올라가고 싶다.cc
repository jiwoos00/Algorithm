#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int A,B,V;
  scanf("%d %d %d",&A,&B,&V);

  printf("%.lf\n",ceil((double)(V-B)/(A-B)));
  return 0;
}
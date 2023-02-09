#include <stdio.h>
#include <string.h>

int main(void) {

  double max=0.0;
  double sum=0.0;
  int i=0, num=0;

  scanf("%d",&num);
  double arr[num];

  for (i=0; i<num; i++){
    scanf("%lf",&arr[i]);
    if (max<arr[i]) max=arr[i];
  }

  for (i=0; i<num; i++){
    sum+=arr[i]/max*100.0;
  }

  printf("%f\n",sum/(double)num);
  
  return 0;
}
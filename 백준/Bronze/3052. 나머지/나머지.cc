#include <stdio.h>
#include <string.h>

int main(void) {

  int num[42]={0,};
  int n=0;
  int cnt=0;

  for (int i=0; i<10; i++){
    scanf("%d",&n);
    n=n%42;
    num[n]++;
  }
  
  for (int j=0; j<42; j++){
    if (num[j]>0) cnt++;
  }

  printf("%d\n",cnt);
  
  return 0;
}
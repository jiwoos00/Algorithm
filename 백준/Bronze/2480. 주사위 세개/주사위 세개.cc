#include <stdio.h>
#include <string.h>

int main(void) {

  int a,b,c,res=0;

  scanf("%d %d %d",&a,&b,&c);

  if (a==b && b==c){
    res=10000+a*1000;
  }
  else if (a!=b && b!=c && a!=c){
    if (a>b && a>c){
      res=a*100;
    }
    else if (b>a && b>c){
      res=b*100;
    }
    else {
      res=c*100;
    }
  }
  else {
    if (a==b){
      res=1000+a*100;
    }
    else if (a==c){
      res=1000+a*100;
    }
    else {
      res=1000+b*100;
    }
  }

  printf("%d\n",res);
  
  return 0;
}
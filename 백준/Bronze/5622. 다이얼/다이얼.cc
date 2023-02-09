#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  char input[16];
  int i,len,time=0;

  scanf("%s",input);
  len=strlen(input);

  time+=len;
  for (i=0; i<len; i++){
    if (input[i]<'D'){
      time+=2;
    }
    else if (input[i]<'G'){
      time+=3;
    }
    else if (input[i]<'J'){
      time+=4;
    }
    else if (input[i]<'M'){
      time+=5;
    }
    else if (input[i]<'P'){
      time+=6;
    }
    else if (input[i]<'T'){
      time+=7;
    }
    else if (input[i]<'W'){
      time+=8;
    }
    else {
      time+=9;
    }
  }

  printf("%d\n",time);
  
  return 0;
}

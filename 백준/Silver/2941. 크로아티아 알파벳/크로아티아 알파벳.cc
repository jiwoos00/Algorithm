#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

  char input[101];
  int len, i, count;
  
  scanf("%s",input);
  len=strlen(input);

  count=len;
  for (i=0; i<len; i++){
    if (input[i]=='='){
      if (input[i-1]=='c' || input[i-1]=='s'){
        count--;
      }
      else if (input[i-1]=='z'){
        if (input[i-2]=='d'){
          count-=2;
        }
        else {
          count--;
        }
      }
    }

    if (input[i]=='-'){
      if (input[i-1]=='c' || input[i-1]=='d'){
        count--;
      }
    }

    if (input[i]=='j'){
      if (input[i-1]=='l' || input[i-1]=='n'){
        count--;
      }
    }
  
  }

  printf("%d\n",count);
  
  return 0;
}

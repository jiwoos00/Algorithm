#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  int num=0, i=0, j=0, len=0;
  int count=0;
  int OX_len=0;
  char OX[81];

  

  scanf("%d",&num);

  for (i=0; i<num; i++){
    scanf("%s",OX);
    len=strlen(OX);

    for (j=0; j<len; j++){
      if (OX[j]=='O'){
        count++;
      }
      else {
        count=0;
      }
      OX_len+=count;
    }
    printf("%d\n",OX_len);
    count=0;
    OX_len=0;
  }
  return 0;
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  int i,j,k,num, num2;
  char arr[20];

  scanf("%d",&num);

  for (i=0; i<num; i++){
    scanf("%d %s",&num2, arr);
    for (j=0; j<strlen(arr); j++){
      for (k=0; k<num2; k++){
        printf("%c",arr[j]);  
      }
    }
    printf("\n");
  }
}

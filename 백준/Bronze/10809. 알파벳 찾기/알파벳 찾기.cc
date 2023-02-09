#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  int arr[26]={-1,};
  char word[100];
  int tmp;
  int i;
  
  scanf("%s",word);

  for (i=0; i<26; i++){
    arr[i]=-1;
  }

  for (i=0; i<strlen(word); i++){
    tmp=word[i]-'0';
    if (arr[tmp-49]==-1){
      arr[tmp-49]=i;
    }
  }

  for (i=0; i<26; i++){
    printf("%d ",arr[i]);
  }
  
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

  int num, i, len, j, count;
  char word[101];

  scanf("%d",&num);
  count=num;

  for (i=0; i<num; i++){
    scanf("%s",word);
    
    len=strlen(word);
    char first='0';
    char alpha[26]={0,};
    
    for (j=0; j<len; j++){
      if (first!=word[j]){
        first=word[j];
        alpha[word[j]-'a']++;
      }
      if (alpha[word[j]-'a']>1){
        count-=1;
        break;
      }
    }
  }
  printf("%d\n",count);
  
  return 0;
}

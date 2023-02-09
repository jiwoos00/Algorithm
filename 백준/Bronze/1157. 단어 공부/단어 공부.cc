#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  int i=0, tmp=0, max=0, max_num=0, count=0;
  
  char word[1000000];
  int arr[26]={0,};
  
  scanf("%s",word);
  int len=strlen(word);
  
  for (i=0; i<len; i++){
    if (word[i]<'a'){
      tmp=word[i]-'A';
      arr[tmp]++;
    }
    else {
      tmp=word[i]-'a';
      arr[tmp]++;
    }
  }

  for (i=0; i<26; i++){
    if (max<arr[i]){
      max=arr[i];
      max_num=i;
    } 
  }

  
  for (i=0; i<26; i++){
    if (max==arr[i]){
      count++;
    }
  }
  if (count>1){
    printf("?\n");  
  }
  else {
    printf("%c\n",max_num+'A');  
  }
}

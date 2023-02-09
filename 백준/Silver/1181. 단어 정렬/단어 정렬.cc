#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
  int len;
  char word[51];
} Word;

int compare(const void *first, const void *second){
  Word *a=(Word*)first;
  Word *b=(Word*)second;
  
  if (a->len > b->len)
    return 1;
  else if (a->len < b->len)
    return -1;
  else {
    if (strcmp(a->word,b->word) < 0) return -1;
    else return 1;
  }

  return 0;
}

int main(){
  int N,i;
  Word *list;
  
  scanf("%d",&N);
  list=(Word*)malloc(N*sizeof(Word));
  
  for (i=0; i<N; i++){
    scanf("%s",list[i].word);
    list[i].len=strlen(list[i].word);
  }

  qsort(list,N,sizeof(list[0]),compare);

  for (i=0; i<N; i++){
    if (strcmp(list[i].word,list[i+1].word)){
      printf("%s\n",list[i].word);  
    }
  }

  return 0;
}
    



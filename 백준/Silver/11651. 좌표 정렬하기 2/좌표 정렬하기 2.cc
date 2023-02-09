#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int x;
  int y;
} coord;

int compare(const void *first, const void *second){
  coord *a=(coord*)first;
  coord *b=(coord*)second;
  
  if (a->y > b->y)
    return 1;
  else if (a->y < b->y)
    return -1;
  else {
    if (a->x < b->x) return -1;
    else return 1;
  }

  return 0;
}

int main(){
  coord *list;
  int N,i;

  scanf("%d",&N);
  list=(coord*)malloc(N*sizeof(coord));

  for (i=0; i<N; i++){
    scanf("%d %d",&list[i].x, &list[i].y);
  }

  qsort(list, N, sizeof(list[0]),compare);

  for (i=0; i<N; i++){
    printf("%d %d\n",list[i].x, list[i].y);
  }

  return 0;
}
    



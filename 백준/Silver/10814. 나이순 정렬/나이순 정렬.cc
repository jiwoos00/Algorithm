#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
  int no;
  int age;
  char name[101];
} mem;

int compare(const void *first, const void *second){
  mem *a=(mem*)first;
  mem *b=(mem*)second;
  
  if (a->age > b->age)
    return 1;
  else if (a->age < b->age)
    return -1;
  else {
    if (a->no < b->no) return -1;
    else return 1;
  }

  return 0;
}

int main(){
  int N,i;
  mem *list;
  
  scanf("%d",&N);
  list=(mem*)malloc(N*sizeof(mem));
  
  for (i=0; i<N; i++){
    scanf("%d %s",&list[i].age, list[i].name);
    list[i].no=i;
  }

  qsort(list,N,sizeof(list[0]),compare);

  for (i=0; i<N; i++){
    printf("%d %s\n",list[i].age, list[i].name);
  }

  return 0;
}
    



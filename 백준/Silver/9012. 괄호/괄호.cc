#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50
#define TRUE 1
#define FALSE 0

/*
typedef struct stack{
    char arr[MAX];
    int top;
}Stack;

void stackInit(Stack *sp){
    sp->top=-1;
}

int isEmpty(Stack *sp){
    if (sp->top==-1) return TRUE;
    return FALSE;
}

int size(Stack *sp){
    return sp->top+1;
}

int isFull(Stack *sp){
    if (sp->top+1>=MAX) return TRUE;
    return FALSE;
}

void push(Stack *sp, char data){
    if (isFull(sp)==TRUE) return;
    sp->arr[++(sp->top)]=data;
}

void pop(Stack *sp){
    if (isEmpty(sp)==TRUE) return;
    sp->arr[(sp->top)--];
}
 
 */

int main(void){
   
    int i, j, num=0;
    char arr[51];
    int count=0;
    scanf("%d",&num);
    
    for (i=0; i<num; i++){
        count=0;
        scanf("%s",arr);
        for (j=0; j<strlen(arr); j++){
            if (count<0) break;
            if (arr[j]=='(') count++;
            else if (arr[j]==')') count--;
        }
        if (count==0) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}


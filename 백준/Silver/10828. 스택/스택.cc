
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 10000

typedef struct stack{
    int arr[MAX_SIZE];
    int top;
} Stack;

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
    if (sp->top+1>=MAX_SIZE) return TRUE;
    return FALSE;
}

void push(Stack *sp, int data){
    if (isFull(sp)==TRUE) return;
    sp->arr[++(sp->top)]=data;
}

int pop(Stack *sp){
    if (isEmpty(sp)==TRUE) return -1;
    return sp->arr[(sp->top)--];
}

int peek(Stack *sp){
    if (isEmpty(sp)==TRUE) return -1;
    return sp->arr[sp->top];
}

int main(void){
  
    char str[6];
    Stack stack;
    
    int num,i,n=0;
    scanf("%d",&num);
    fgetc(stdin);
    stackInit(&stack);
    
    for (i=0; i<num; i++){
        scanf("%s",str);
        fgetc(stdin);
        
        if (strcmp(str,"push")==0){
            scanf("%d",&n);
            fgetc(stdin);
            push(&stack,n);
        }
        
        else if (strcmp(str,"pop")==0){
            printf("%d\n",pop(&stack));
        }
        
        else if (strcmp(str,"empty")==0){
            printf("%d\n",isEmpty(&stack));
        }
        
        else if (strcmp(str, "size")==0){
            printf("%d\n",size(&stack));
        }
        
        else if (strcmp(str,"top")==0){
            printf("%d\n",peek(&stack));
        }
    }
    return 0;
}



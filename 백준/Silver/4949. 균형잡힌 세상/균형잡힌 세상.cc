#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX 102
#define TRUE 1
#define FALSE 0


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

char pop(Stack *sp){
    if (isEmpty(sp)==TRUE) return '!';
    return sp->arr[(sp->top)--];
}
 
char peek(Stack *sp){
    return sp->arr[sp->top];
}
 

int main(void){
   
    Stack stack;
    stackInit(&stack);
    
    char e,arr[MAX];
    int i,count=1;
    
    while(1){
        
        
        fgets(arr, MAX, stdin);
        if (strcmp(arr,".\n")==0) break;
        
        
        for (i=0; i<strlen(arr); i++){

            if (arr[i]=='(' || arr[i]=='[') push(&stack, arr[i]);
            else if (arr[i]==')'){
                e=pop(&stack);
                if (e!='('){
                    count=0;
                    break;
                }
            }
            else if (arr[i]==']'){
                e= pop(&stack);
                if (e!='['){
                    count=0;
                    break;
                }
            }
        }
        if (!isEmpty(&stack)) count=0;
        if (count==0) printf("no\n");
        else printf("yes\n");
        
        stack.top=-1;
        count=1;
    }
    
    
    
    return 0;
}


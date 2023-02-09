#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Que{
    int num[5000000];
    int front, rear;
}Que;
Que q;
void init(Que *q){
    q->front=q->rear=-1;
}

int isEmpty(Que *q){
    if (q->front==q->rear) return 1;
    return 0;
}

int size(Que *q){
    if (isEmpty(q)) return 0;
    return q->rear-q->front;
}

void push(Que *q, int data){
    q->num[++(q->rear)]=data;
}

int pop(Que *q){
    if (isEmpty(q)) return -1;
    return q->num[++(q->front)];
}

int front(Que *q){
    if (isEmpty(q)) return -1;
    return q->num[(q->front+1)];
}

int back(Que *q){
    if (isEmpty(q)) return -1;
    return q->num[q->rear];
}

int main(void){
    init(&q);
    
    int i,n;
    scanf("%d",&n);
    
    for (i=1; i<=n; i++){
        push(&q,i);
    }
    int temp;
    while(!isEmpty(&q)){
        temp=pop(&q);
        if (isEmpty(&q)) break;
        temp=pop(&q);
        push(&q,temp);
        
    }
    
    printf("%d\n",temp);
    return 0;
}

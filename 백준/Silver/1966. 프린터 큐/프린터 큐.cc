#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 101

typedef struct {
    int key;
    int value;
}Paper;

typedef struct {
    Paper queue[SIZE];
    int front, rear;
    int size;
} QueueType;

void initQueue(QueueType *q){
    q->front=q->rear=0;
    q->size=0;
}

int isEmpty(QueueType *q){
    return q->rear==q->front;
}

int isFull(QueueType *q){
    return (q->rear+1)%SIZE == q->front;
}

void enqueue(QueueType *q, Paper e){
    if (isFull(q)) return;
    q->rear=(q->rear+1)%SIZE;
    q->queue[q->rear]=e;
    q->size+=1;
}

Paper dequeue(QueueType *q){
    if (isEmpty(q)) exit(1);
    q->front=(q->front+1)%SIZE;
    q->size-=1;
    return q->queue[q->front];
}

void printQueue(QueueType *q){
    int idx=(q->front+1)%SIZE;
    
    for (int i=0; i<q->size; i++){
        printf("[%d %d]",q->queue[idx].key, q->queue[idx].value);
        idx=(idx+1)%SIZE;
    }
    printf("\n");
}

int isLarge(QueueType *q){
    if (isEmpty(q)) return -1;
    int idx=(q->front+1)%SIZE;
    int max=q->queue[idx].key;
    
    for (int i=0; i<q->size-1; i++){
        idx=(idx+1)%SIZE;
        if (max<q->queue[idx].key) return 1;
    }
    return 0;
}

int main(void){
    QueueType q;
    Paper tmp;
    int i,j,n,m,e,test_case,cnt;
    
    scanf("%d",&test_case);
    
    for (i=0; i<test_case; i++){
        scanf("%d %d",&n,&m);
        
        initQueue(&q);
        cnt=0;
        
        for (j=0; j<n; j++){
            scanf("%d",&tmp.key);
            
            if (j==m) tmp.value=1;
            else tmp.value=0;
            
            enqueue(&q,tmp);
        }
        
        do {
            while (isLarge(&q)!=0){
                tmp=dequeue(&q);
                enqueue(&q,tmp);
            }
            tmp=dequeue(&q);
            cnt+=1;
        } while(tmp.value!=1);
        
        printf("%d\n",cnt);
    }
    return 0;
}

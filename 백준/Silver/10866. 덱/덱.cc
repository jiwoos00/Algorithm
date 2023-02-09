#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;
typedef struct DQNode{
    element data;
    struct DQNode *llink;
    struct DQNode *rlink;
}DQNode;

typedef struct {
    DQNode *front, *rear;
}DQueType;

DQueType *create(){
    DQueType *DQ;
    DQ=(DQueType*)malloc(sizeof(DQueType));
    DQ->front=NULL;
    DQ->rear=NULL;
    return DQ;
}

void push_front(DQueType *DQ, element item){
    DQNode *newNode=(DQNode*)malloc(sizeof(DQNode));
    newNode->data=item;
    
    if (DQ->front==NULL){
        DQ->front=newNode;
        DQ->rear=newNode;
        newNode->rlink=NULL;
        newNode->llink=NULL;
    }
    else {
        DQ->front->llink=newNode;
        newNode->rlink=DQ->front;
        newNode->llink=NULL;
        DQ->front=newNode;
    }
}

void push_back(DQueType *DQ, element item){
    DQNode *newNode=(DQNode*)malloc(sizeof(DQNode));
    newNode->data=item;
    
    if (DQ->rear==NULL){
        DQ->rear=newNode;
        DQ->front=newNode;
        newNode->rlink=NULL;
        newNode->llink=NULL;
    }
    else {
        DQ->rear->rlink=newNode;
        newNode->llink=DQ->rear;
        newNode->rlink=NULL;
        DQ->rear=newNode;
    }
}

element pop_front(DQueType *DQ){
    DQNode *tmp = DQ->front;
    element item;
    
    if (DQ->front==NULL) {
        printf("-1\n");
        return -1;
    }
    else {
        item=tmp->data;
        if (DQ->front->rlink==NULL){
            DQ->front=NULL;
            DQ->rear=NULL;
        }
        else {
            DQ->front = DQ->front->rlink;
            DQ->front->llink=NULL;
        }
        free(tmp);
        printf("%d\n",item);
        return item;
    }
}

element pop_back(DQueType *DQ){
    DQNode *tmp = DQ->rear;
    element item;
    
    if (DQ->rear==NULL) {
        printf("-1\n");
        return -1;
    }
    else {
        item = tmp->data;
        if (DQ->rear->llink==NULL){
            DQ->front=NULL;
            DQ->rear=NULL;
        }
        else {
            DQ->rear=DQ->rear->llink;
            DQ->rear->rlink=NULL;
        }
        free(tmp);
        printf("%d\n",item);
        return item;
    }
}

int size(DQueType *DQ){
    DQNode *tmp = DQ->front;
    int count=0;
    
    if (tmp==NULL) {
        printf("0\n");
        return 0;
    }
    else {
        while(tmp!=NULL){
            tmp=tmp->rlink;
            count++;
        }
    }
    printf("%d\n",count);
    return count;
}

int empty(DQueType *DQ){
    if (DQ->front==NULL){
        printf("1\n");
        return 1;
    }
    else {
        printf("0\n");
        return 0;
    }
}

element front(DQueType *DQ){
    DQNode *tmp = DQ->front;
    
    if (DQ->front == NULL){
        printf("-1\n");
        return -1;
    }
    else {
        printf("%d\n",tmp->data);
        return tmp->data;
    }
}

element back(DQueType *DQ){
    DQNode *tmp = DQ->rear;
    
    if (DQ->rear == NULL) {
        printf("-1\n");
        return -1;
    }
    else {
        printf("%d\n",tmp->data);
        return tmp->data;
    }
}

int main(void){
    DQueType *DQ=create();
    int num,num2,i;
    char n[100];

    scanf("%d",&num);
    

    for (i=0; i<num; i++){
        scanf("%s",n);
        
        if (strcmp(n,"push_front")==0){
            scanf("%d",&num2);
            push_front(DQ, num2);
        }
        else if (strcmp(n,"push_back")==0) {
            scanf("%d",&num2);
            push_back(DQ, num2);
        }
        else if (strcmp(n,"pop_front")==0) pop_front(DQ);
        else if (strcmp(n,"pop_back")==0) pop_back(DQ);
        else if (strcmp(n,"size")==0) size(DQ);
        else if (strcmp(n,"empty")==0) empty(DQ);
        else if (strcmp(n,"front")==0) front(DQ);
        else if (strcmp(n,"back")==0) back(DQ);
    }
    

    return 0;
}

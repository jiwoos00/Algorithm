#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int element; //스택의 원소의 자료형을 int로 정의

typedef struct stackNode { //스택의 노드를 구조체로 정의
    element data;
    struct stackNode *link;
} stackNode;

stackNode *top;

//스택이 공백 상태인지 확인하는 연산
int isEmpty(){
    if (top==NULL) return 1;
    return 0;
}

//스택의 top에 원소를 삽입하는 연산
void push(element item){
    stackNode *temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data=item;
    temp->link=top; //삽입 노드를 top의 위에 연결
    top=temp; //top위치를 삽입 노드로 이동
}

//스택의 top에서 원소를 삭제하는 연산
element pop(){
    element item;
    stackNode *temp=top;
    
    if (top==NULL){
        printf("\nStack is empty!\n");
        return 0;
    }
    else { //스택이 공백 리스트가 아닌 경우
        item=temp->data;
        top=temp->link; //top위치를 삭제노드 아래로 이동
        free(temp); //삭제된 노드의 메모리 반환
        return item; //삭제된 원소 반환
    }
}

//스택의 top 원소를 검색하는 연산
element peek(){
    if (top==NULL){
        printf("\nStack is empty!\n");
        return 0;
    }
    else {
        return (top->data);
    }
}

//스택의 원소를 top에서 bottom 순서로 출력하는 연산
void printStack(){
    stackNode *p = top;
    printf("\nStack[ ");
    while(p){
        printf("%d ",p->data);
        p=p->link;
    }
    printf("] ");
}

int testPair(char *exp){
    char symbol, open_pair;
    int i, length=strlen(exp);
    top = NULL;
    
    for (i=0; i<length; i++){
        symbol=exp[i];
        switch(symbol){
            //왼쪽 괄호는 스택에 삽입
            case '(':
            case '[':
            case '{':
                push(symbol); break;
            //오른쪽 괄호를 읽으면
            case ')':
            case ']':
            case '}':
                if (top==NULL) return 0;
                else {
                    //스택에서 마지막으로 읽은 괄호를 꺼냄
                    open_pair=pop();
                    //괄호 쌍이 맞는지 검사
                    if ((open_pair=='(' && symbol!=')') ||
                        (open_pair=='[' && symbol!=']') ||
                        (open_pair=='{' && symbol!='}'))
                        //괄호 쌍이 틀리면 수식 옹류
                        return 0;
                    else break;
                }
        }
    }
    if (top==NULL) return 1;
    else return 0;
}

element evalPostfix(char *exp){
    int opr1, opr2, value, i=0;
    int length=strlen(exp);
    char symbol;
    top=NULL;
    
    for (i=0; i<length; i++){
        symbol=exp[i];
        if (symbol!='+' && symbol!='-' && symbol!='*' && symbol!='/'){
            value=symbol-'0';
            push(value);
        }
        else {
            opr2=pop();
            opr1=pop();
            switch(symbol){
                case '+': push(opr1+opr2); break;
                case '-': push(opr1-opr2); break;
                case '*': push(opr1*opr2); break;
                case '/': push(opr1/opr2); break;
            }
        }
    }
    //수식 exp에 대한 처리를 마친 후 스택에 남아 있는 결과값을 pop하여 반환
    return pop();
}

void infix_to_postfix(char *exp){
    int i=0;
    int length=strlen(exp);
    char symbol;
    top=NULL;
    
    for (i=0; i<length; i++){
        symbol=exp[i];
        switch(symbol){
            case '(':
            case '[':
            case '{':
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                push(symbol); break;
            case ')':
            case '}':
            case ']':
                printf("%c",pop()); break;
            default :
                printf("%c",symbol); break;
        }
    }
    printf("\n");
}

int main(void){

    int i=0;
    int num=0;
    scanf("%d",&num);
    int arr[num];
    int ans[num];
    for (i=0; i<num; i++){
        scanf("%d",&arr[i]);
        ans[i]=-1;
    }
    for (i=0; i<num; i++){
        while(!isEmpty() && arr[peek()]<arr[i]){
            ans[pop()]=arr[i];
        }
        push(i);
    }
    
    for (i=0; i<num; i++){
        printf("%d ",ans[i]);
    }
    return 0;
    
}


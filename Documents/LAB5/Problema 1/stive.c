#include "stive.h"


Stack initStack(Data data){
    Stack s = (Stack) malloc(sizeof(struct stack));
    s->value=data;
    s->next=NULL;
    return s;

}

int isEmpty(Stack s){
    return s == NULL;

}
Stack push(Stack s, Data data) {
    Stack top;
    if(isEmpty(s))
    return initStack(data);
    top=initStack(data);
    top->next=s;
    return top;
}

Stack pop(Stack s)
{
    Stack tmp;
    if(isEmpty(s))
    return s;
    tmp = s;
    s = s->next;
    free(tmp);
    return s;

}

Data top(Stack s){
    if(isEmpty(s))
    exit(1);
    return s->value;
}
Stack freeStack(Stack s){
    while(!isEmpty(s))
    s=pop(s);
    return NULL;
}



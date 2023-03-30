#include "cozi.h"


TStack initStack(T data){
    TStack s = (TStack) malloc(sizeof(struct stack));
    s->value=data;
    s->next=NULL;
    return s;

}

int isEmpty(TStack s){
    return s == NULL;

}
TStack push(TStack s, T data) {
    TStack top;
    if(isEmpty(s))
    return initStack(data);
    top=initStack(data);
    top->next=s;
    return top;
}

TStack pop(TStack s)
{
    TStack tmp;
    if(isEmpty(s))
    return s;
    tmp = s;
    s = s->next;
    free(tmp);
    return s;

}

T top(TStack s){
    if(isEmpty(s))
    exit(1);
    return s->value;
}
TStack freeStack(TStack s){
    while(!isEmpty(s))
    s=pop(s);
    return NULL;
}

Node *initNode(T data)
{
    Node *node =malloc(sizeof(struct node));
    node->data=data;
    node->next=NULL;
    return node;
}
Node *freeNode(Node *node)
{
    if(node)
    free(node);
    return NULL;

}
TQueue initQueue(T data){
    TQueue queue =malloc(sizeof(struct queue));
    queue->head=queue->tail=initNode(data);
    queue->size=1;
    return queue;
}
TQueue init()
{
    return NULL;
}
int isEmpty2(TQueue queue)
{
    return queue == NULL || queue->head== NULL || queue->size==0;
}

 TQueue enqueue(TQueue queue, T data) {
 Node *node;
 if (isEmpty2(queue)) {
 if (queue == NULL)
 return initQueue(data);
 free(queue);
 return initQueue(data);
}
 node = initNode(data);
 queue->tail->next = node;
 queue->tail = node;
 queue->size++;
 return queue;
 }

TQueue dequeue(TQueue queue) {
 Node *tmp;
 if (!isEmpty2(queue)) {
 tmp = queue->head;
 queue->head = queue->head->next;
 tmp = freeNode(tmp);
 queue->size--;
 }
 return queue;
 }

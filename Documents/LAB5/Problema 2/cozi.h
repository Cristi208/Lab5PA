#include <stdio.h>
#include <stdlib.h>
#pragma once

typedef char T;
typedef struct stack{
    T value;
    struct stack *next;

}*TStack;

typedef struct  node
{
    T data ;
    struct node *next;
}Node;
typedef struct queue{
    Node *head , *tail;
    int size;
}*TQueue;





TStack initStack(T data);
TStack push(TStack s, T data);
int isEmpty(TStack s);
TStack pop(TStack s);
T top(TStack s);
TStack freeStack(TStack s);
Node *initNode(T data);
Node *freeNode(Node *node);
TQueue initQueue(T data);
TQueue init();
int isEmpty2(TQueue queue);
TQueue enqueue(TQueue queue, T data) ;
TQueue dequeue(TQueue queue) ;




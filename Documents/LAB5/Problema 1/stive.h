#include <stdio.h>
#include <stdlib.h>
#pragma once

typedef char Data;
typedef struct stack{
    Data value;
    struct stack *next;

}*Stack;



Stack initStack(Data data);
Stack push(Stack s, Data data);
int isEmpty(Stack s);
Stack pop(Stack s);
Data top(Stack s);
Stack freeStack(Stack s);




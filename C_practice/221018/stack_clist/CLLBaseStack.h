#ifndef __CLLB_STACK_H__
#define __CLLB_STACK_H__

#include "CLinkedList.h"

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _cllbStack
{
   List *plist;
} CLLBStack;

typedef CLLBStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif
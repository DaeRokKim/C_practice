#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack
{
   Data stackArr[STACK_LEN];
   int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *pstack); // 초기화
int SIsEmpty(Stack *pstack);   // 비었는지 확인

void SPush(Stack *pstack, Data data); // push 연산
Data SPop(Stack *pstack);             // pop 연산
Data SPeek(Stack *pstack);            // peek 연산

#endif
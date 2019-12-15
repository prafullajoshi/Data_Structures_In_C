#ifndef STACK_H
#define STACK_H

typedef struct Stack
{
	int *m_ipStack;
	int m_iSize;
	int m_iTop;
}STACK_T;
STACK_T st;

void Initialize(STACK_T *const st,const int size);
void DeInitialize(STACK_T *const st);
void push(STACK_T *const st,int data);
int pop(STACK_T *const st);
_Bool IsFull(STACK_T *const st);
_Bool IsEmpty(STACK_T *const st);

#endif


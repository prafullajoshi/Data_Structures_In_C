#ifndef QUEUE_H
#define QUEUE_H
#include<stdbool.h>

typedef struct 
{
	int *m_ipQueue;
	int m_iFront;
	int m_iRear;
	int m_iSize;
}QUEUE_T;

QUEUE_T qt;

void Initialize(QUEUE_T *const,const int);
void DeInitialize(QUEUE_T *const);
void EnQueue(QUEUE_T *const,const int);
int DeQueue(QUEUE_T *const);
_Bool IsQEmpty(QUEUE_T *const);
_Bool IsQFull(QUEUE_T *const);

#endif

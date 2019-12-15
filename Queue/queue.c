#include"queue.h"
#include<stdio.h>
#include<stdlib.h>

void Initialize(QUEUE_T *const qt,const int size)
{
	if(qt)
	{
		qt->m_iSize=size;
		qt->m_iFront=-1;
		qt->m_iRear=-1;
		qt->m_ipQueue=(int *)malloc(size*sizeof(int));
	}
}


void DeInitialize(QUEUE_T *const qt)
{
	if(qt)
	{
		qt->m_iSize=0;
		qt->m_iFront=-1;
		qt->m_iRear=-1;
		free(qt->m_ipQueue);
		qt->m_ipQueue=NULL;
	}
}


void EnQueue(QUEUE_T *const qt,const int data)
{
	if(qt && qt->m_ipQueue)
	{
		qt->m_ipQueue[++qt->m_iRear]=data;
	}
}


int DeQueue(QUEUE_T *const qt)
{
	int data=0;
	if(qt && qt->m_ipQueue)
	{
		data=qt->m_ipQueue[++qt->m_iFront];
	}
	return data;
}



_Bool IsQEmpty(QUEUE_T *const qt)
{
	if(qt && qt->m_ipQueue)
	{
		return qt->m_iFront==qt->m_iRear;
	}
}


_Bool IsQFull(QUEUE_T *const qt)
{
	if(qt)
	{
		return qt->m_iRear==qt->m_iSize-1;
	}
}


int main()
{
	QUEUE_T qt;
	qt.m_ipQueue=NULL;
	
	int i,ch,size,data;
	do
	{
		printf("\n--QUEUE OPERATIONS--");
		printf("\n1.Initialize\n2.De-initialize\n3.EnQueue\n4.DeQueue\n5.Display\n6.Exit");
		printf("\nEnter your choice except 5:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter size of queue :");
				scanf("%d",&size);
				Initialize(&qt,size);
				printf("\nQueue intialized");
				break;
			case 2:
				DeInitialize(&qt);
				printf("\nQueue deinitialized");
				break;
			case 3:	
				if(!IsQFull(&qt))
				{
					printf("\nEnter data to insert into queue :");
					scanf("%d",&data);
					EnQueue(&qt,data);
				}
				else
				{
					printf("\nQueue is full");
				}
				break;
			case 4:
				if(!IsQEmpty(&qt))
				{
					printf("\nElement deleted :%d",DeQueue(&qt));
				}
				else
				{
					printf("\nQueue is empty");
				}
				break;
			case 5:
				printf("\nSorry,display function is not working right now.");
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\n You entered wrong choice.");
		}
	}
	while(ch!=6);
}		

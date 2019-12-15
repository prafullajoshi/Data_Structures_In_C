#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

void Initialize(STACK_T *const st,const int size)
{
	if(st)
	{
		st->m_iSize=size;
		st->m_iTop=-1;
		st->m_ipStack=(int*)malloc(size*sizeof(int));
	}
}


void DeInitialize(STACK_T *const st)
{
	if(st)
	{
		st->m_iSize=0;
		st->m_iTop=-1;
		free(st->m_ipStack);
		st->m_ipStack=NULL;	// remove NULL statement and check
	}
}


void push(STACK_T *const st,const int data)
{
	if(st)
	{
		st->m_iTop++;
		st->m_ipStack[st->m_iTop]=data;	//try other combinations of ++st statement
	}
}


int pop(STACK_T *const st)
{
	int data=0;
	if(st)
	{
		data=st->m_ipStack[st->m_iTop];		//Try removing m_ipStack
		st->m_iTop--;
	}
	return data;
}


_Bool IsFull(STACK_T *const st)
{

	printf("Checking IsFull : %d %d %d", st->m_iSize== st->m_iTop-1, st->m_iSize, st->m_iTop);
	if(st)
	{
		return st->m_iSize==st->m_iTop-1;		//both size
	}
	//return true;
}


_Bool IsEmpty(STACK_T *const st)
{
	if(st)
	{
		return -1==st->m_iTop;
	}

}

void Display(STACK_T *st)
{
	while(st->m_iTop!=-1)
	{
		printf("\n%d",st->m_ipStack[st->m_iTop]);		
		st->m_iTop--;
	}
}

int main()
{
	STACK_T st;
	st.m_ipStack=NULL;
	int i,ch,size,data;
	do
	{
		printf("\n--STACK OPERATIONS--");
		printf("\n1.Initialize\n2.De-initialize\n3.Push\n4.Pop\n5.Display\n6.Exit");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter size of stack :");
				scanf("%d",&size);
				Initialize(&st,size);
				printf("\nStack intialized");
				break;
			case 2:
				DeInitialize(&st);
				printf("\nStack deinitialized");
				break;
			case 3:
				if(!IsFull(&st))
				{
					printf("\nEnter data to push on stack :");
					scanf("%d",&data);
					push(&st,data);
				}
				else
				{
					printf("\nStack is full");
				}
				break;
			case 4:
				if(!IsEmpty(&st))
				{
					printf("\nElement popped :%d",pop(&st));
				}
				else
				{
					printf("\nStack is empty");
				}
				break;
			case 5:
				Display(&st);
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\nYou entered wrong choice.\n");
		}
	}
	while(ch!=5);
}

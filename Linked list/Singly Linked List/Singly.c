#include"Singly.h"
#include<stdio.h>
#include<stdlib.h>

STUDENT_T *Create(const int n)
{
	STUDENT_T *head=NULL;
	for(int i=0;i<n;i++)
	{
		int rollNo;
		printf("\nEnter Roll number to add :");
		scanf("%d",&rollNo);
		Insert(&head,i+1,rollNo);
	}
	return head;
}


void Insert(STUDENT_T **head,const int pos,const int rollNo)
{
	if(head)
	{
		STUDENT_T *st=(STUDENT_T *)malloc(sizeof(STUDENT_T));
		st->rollNo=rollNo;
		st->next=NULL;
		if(pos==1)	// if position is 1
		{
			if(*head!=NULL)
			{
				st->next=*head;
			}
			*head=st;
		}
		else	//position other than 1
		{
			if(*head!=NULL)
			{
				STUDENT_T *traverse=*head;
				int count=pos;
				while(traverse->next!=NULL && count-2!=0)
				{	
					traverse=traverse->next;
					count--;
				}
				if(count-2!=0)
				{
					printf("\nYou enetered wrong position but still for a courtesy adding node to last position");
				}
				st->next=traverse->next;
				traverse->next=st;
			}
			else
			{
				*head=st;
			}
		}
	}
}


void Display(STUDENT_T *head)
{
	if(head)
	{	
		do
		{
			printf("RollNo=%d->",head->rollNo);
			head=head->next;
		}
		while(head);
	}
}


STUDENT_T *Delete(STUDENT_T *head,const int pos)
{
	if(head)
	{
		STUDENT_T *deleteStudent=NULL;
		if(pos==1)
		{
			deleteStudent=head;
			head=head->next;
		}
		else
		{
			STUDENT_T *traverse=head;
			int count =pos;
			while(traverse && count-2!=0)
			{
				traverse=traverse->next;
				count--;
			}
			if(traverse)
			{
				deleteStudent=traverse->next;
				traverse->next=traverse->next->next;
			}
			else
			{
				printf("\nInvalid position");
			}
		}
		if(deleteStudent)
			free(deleteStudent);
	}
	return head;
}

_Bool Search(STUDENT_T *head,const int rollNo)
{
	while(head)
	{
		if(head->rollNo==rollNo)
		{
			return 1;
			head=head->next;
		}
	}
	return 0;
}	

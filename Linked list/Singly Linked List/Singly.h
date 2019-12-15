#ifndef SINGLY_H
#define SINGLY_H
typedef struct Student
{
	int rollNo;
	struct Student *next;
}STUDENT_T;

STUDENT_T *Create(const int n);
void Insert(STUDENT_T **head,const int pos,const int rollNo);
STUDENT_T *Delete(STUDENT_T *head,int pos);
void Display(STUDENT_T *head);
_Bool Search(STUDENT_T *head,const int rollNo);
void FreeLL(STUDENT_T *head);

#endif

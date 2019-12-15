#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
    struct node *prev;
}*head;


int main(void)
{
	//Variable declaration
	int result;
	//Function declaration
	void Create(int);
	int Display(void);
	void Add_At_Start(int);
	void Add_After(int, int);
	int Delete_Element(int);
	int Reverse(void);
	int Count_Nodes(void);
	int Search_First_Occurance(int);
	int Search_All_Occurances(int);
	int Search_Last_Occurance(int);
	//Variable declarations
	int ch, NumberOfElements, position, element;

	//Code
	head = NULL;	// making the head NULL since the list is empty initially

	while (1)
	{
		printf("\n0)Exit \n1)Create \n2)Display \n3)Add_At_Start \n4)Add_After \n5)Delete_Element \n6)Reverse \n7)Count_Nodes \n8)Search_First_Ocurrance \n9)Search_All_Occurances \n10)Search_Last_Occurance \n");
		printf("\nEnter your choice :");
		scanf("%d", &ch);
		switch (ch)
		{
		case 0:
			exit(0);
			break;
		case 1:
			printf("\nHow many elements do you want to add linked list :");
			scanf("%d", &NumberOfElements);
			for (int i = 0; i < NumberOfElements; i++)
			{
				printf("Enter the element :");
				scanf("%d", &element);
				Create(element);
			}
			break;
		case 2:
			Display();
			break;
		case 3:
			printf("\nEnter the element to add at start of linked list :");
			scanf("%d", &element);
			Add_At_Start(element);
			printf("\nElement added at the begining successfully !!");
			break;
		case 4:
			printf("Enter the position after which you want to add a new element :");
			scanf("%d", &position);
			printf("Enter the element to do you want to add in linked list :");
			scanf("%d", &element);
			Add_After(element, position);
			break;
		case 5:
			printf("\nEnter the element to be deleted :");
			scanf("%d", &element);
			Delete_Element(element);
			break;
		case 6:
			printf("\nThe reversed linked list is :\n");
			Reverse();
			Display();
			break;
		case 7:
			result = Count_Nodes();
			printf("\nTotal number of node in list are :%d\n", result);
			break;
		case 8:
			printf("\nEnter the number to be searched for 1st occurance :");
			scanf("%d", &element);
			result = Search_First_Occurance(element);
			printf("\nFirst occurance of %d found at position : %d\n", element, result);
			break;
		case 9:
			printf("\nEnter the number to be searched for total occurances :");
			scanf("%d", &element);
			result = Search_All_Occurances(element);
			printf("\nTotal number of occurances of %d in list : %d\n",element, result);
			break;
		case 10:
			printf("\nEnter the number to be searched for last occurances :");
			scanf("%d", &element);
			result = Search_Last_Occurance(element);
			printf("\nLast occurance of %d in list : %d\n", element, result);
			break;
		default:
			printf("\nPlease enter the correct choice :");
			break;
		}
	}
}


void Create(int element)
{
	//Code
	struct node *tmp, *q;

	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = element;
	tmp->next = NULL;
    tmp->prev = NULL;


	if (head == NULL)
	{
		head = tmp;									// Point head to tmp...since it will be the first element
	}
	else
	{
		q = head;
		while (q->next != NULL)
			q = q->next;
		q->next = tmp;								// Put address of tmp in next of q....make q->next point to tmp
        tmp->prev = q;                              // Put Address of q in prev of tmp....make tmp->prev point to q
	}
}

int Display()
{
	//Code
	struct node *q;
	if (head == NULL)
	{
		printf("\nList is empty\n\n");
		return 0;
	}
	q = head;								// Point q to head
	printf("\nThe list is :\n");
	while (q != NULL)
	{
		printf("\n%d", q->data);
		q = q->next;				// point q to q->next
	}
	printf("\n");
	return 0;
}


void Add_At_Start(int element)
{
	//Code

	struct node *tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = element;
    tmp->prev = NULL;           // There will be no element before tmp since it is the first node.
	tmp->next = head;			// Making the tmp to point to the node where head is pointing now
    head->prev = tmp;           // Make current head point to tmp with prev.....head->prev = tmp

	head = tmp;					// Make head to point to tmp
}

void Add_After(int element, int position)
{
	//Code

	struct node *tmp, *q;
	q = head;							// Point q to head
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->data = element;

	for (int i = 0; i < position - 1; i++)
		q = q->next;
    q->next->prev = tmp;                // MAke next element of q to point to tmp using prev...q->next->prev = tmp    
	tmp->next = q->next;				// Make tmp->next to point to q->next so that both forward links are set.
    tmp->prev = q;                      // Make prev of tmp to point to q
	q->next = tmp;						// Making q point to tmp by this statement
}

int Delete_Element(int element)
{
	//code
	struct node *tmp, *q;
	/*---FOLLOWING CODE IS FOR FIRST ELEMENT DELETION---*/
	if (head->data == element)			// Check whether it is the first element or not where head is pointing
	{
		tmp = head;						// Make tmp point to head
		head = head->next;				// Make head to point to next element in the list(2nd element..;so that first element can be deleted safely)
        head->prev = NULL;              // Since head is moved ahead so it's prev link should be NULL
		free(tmp);
		printf("\nElement deleted successfully !!\n");
		return 0;
	}

	/*---FOLLOWING CODE IS FOR MIDDLE ELEMENT DELETION---*/

	q = head;							// Making q to point to head
	while (q->next->next != NULL)
	{									// Here we want tmp at actual poistion of the element to be deleted and q just before it
		if (q->next->data == element)
		{
			tmp = q->next;				// Making tmp to point to p->next(next node of q)
			q->next = tmp->next;        // 
            tmp->next->prev = q;        // Making the prev link of next node of tmp to point to q....tmp->next->prev = q 
			free(tmp);
			printf("\nElement deleted successfully !!\n");
			return 0;
		}
		q = q->next;
	}

	/*---FOLLOWING CODE IS FOR LAST ELEMENT DELETION---*/


	if (q->next->data == element)
	{
		tmp = q->next;
		free(tmp);
		q->next = NULL;
		printf("\nElement deleted successfully !!\n");
		return 0;
	}

	printf("\nElement not found !!!\n");
	return 0;
}


int Reverse()
{
	//Code

	struct node *p1, *p2;
	if (head->next == NULL)
	{
		return 0;
	}
	p1 = head;
	p2 = p1->next;
	p1->next = NULL;
	p1->prev = p2;
	while (p2 != NULL)
	{
		p2->prev = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p2->prev;
	}
	head = p1;
	return 0;
}


int Count_Nodes()
{
	//Variable declaration
	int count = 0;
	//Code
	struct node *tmp;
	if (head != NULL)
	{
		tmp = head;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			count++;
		}
	}
	else
	{
		printf("\nList is empty\n");
	}
	return count;
}


int Search_First_Occurance(int element)
{
	//Variable declarations
	int pos = 0;
	//Code
	struct node *tmp;
	if (head != NULL)
	{
		tmp = head;
		
		while (tmp != NULL)
		{
			++pos;
			if (tmp->data == element)
			{
				return pos;
			}
			tmp = tmp->next;
		}
	}
	else
	{
		printf("\nList is empty\n");
		return -1;
	}
	return 0;
}


int Search_All_Occurances(int element)
{
	//Variable declarations
	int count = 0;
	//Code
	struct node *tmp;
	if (head != NULL)
	{
		tmp = head;

		while (tmp != NULL)
		{
			
			if (tmp->data == element)
			{
				count++;
			}
			tmp = tmp->next;
		}
		return count;
	}
	else
	{
		printf("\nList is empty\n");
		return -1;
	}
}


int Search_Last_Occurance(int element)
{
	//Variable declaration
	int pos1 = 0;
	int pos2 = -1;
	
	//Code
	struct node *tmp;
	if (head != NULL)
	{
		tmp = head;
		while (tmp != NULL)
		{
			pos1++;
			if (tmp->data == element)
			{
				pos2 = pos1;
			}
			tmp = tmp->next;
		}
		return pos2;
	}
	else
	{
		printf("\nList is empty.\n");
		return -1;
	}
}
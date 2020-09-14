#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

Node push(int data, Node top);
Node pop(Node top);
void display(Node top);

void main()
{
	int no, ch, e;
	printf(" Enter you choice:");
	printf("\n 1 - Push");
	printf("\n 2 - Pop");
	printf("\n 3 - Display");
	printf("\n 4 - Exit");

	Node top = NULL;
	while (1)
	{
		printf("\n Enter choice : ");
		scanf("%d", &ch);

		switch (ch)
		{
			case 1:printf(" Enter data : ");
			       scanf("%d", &no);
			       top = push(no, top);
			       break;
			case 2:top = pop(top);
			       break;
			case 3:display(top);
			       break;
			case 4:  exit(0);
			default :printf("Invalid Input");
				 break;
		}
	}	
}

//Push
Node push(int ele, Node top)
{
    if (top == NULL)
    {
        top =(Node)malloc(sizeof(struct node));
        top->next = NULL;
        top->data = ele;
	return top;
    }
    else
    {
        Node temp =(Node)malloc(sizeof(struct node));
        temp->next = top;
        temp->data = ele;
        top = temp;
	return top;
    }
}

//Display
void display(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("Stack is empty");
        return;
    }
    printf(" Elements in the stack are:\n");
    while (t != NULL)
    {
        printf(" %d \n", t->data);
        t = t->next;
    }
 }

//Pop elements
Node pop(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("\nStack underflow");
        return top;
    }
    else
        t = t->next;
    printf("\n Popped element : %d", top->data);
    free(top);
    top = t;
    return top;
}

/*
 Enter you choice:
 1 - Push
 2 - Pop
 3 - Display
 4 - Exit
 Enter choice : 1
 Enter data : 23

 Enter choice : 1
 Enter data : 24

 Enter choice : 1
 Enter data : 45

 Enter choice : 2

 Popped element : 45
 Enter choice : 3
 Elements in the stack are:
24 23 
 Enter choice : 4
*/

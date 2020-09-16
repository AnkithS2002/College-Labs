#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	struct Node* next; 
}; 

struct Node* Reverse(struct Node* head, int k) 
{ 
	stack<Node*> kstack; 
	struct Node* current = head; 
	struct Node* prev = NULL; 

	while (current != NULL) { 

		int count = 0; 
		while (current != NULL && count < k) { 
			kstack.push(current); 
			current = current->next; 
			count++; 
		} 

		while (kstack.size() > 0) { 

			if (prev == NULL) { 
				prev = kstack.top(); 
				head = prev; 
				kstack.pop(); 
			} else { 
				prev->next = kstack.top(); 
				prev = prev->next; 
				kstack.pop(); 
			} 
		} 
	} 

	prev->next = NULL; 

	return head; 
} 

void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = 
		(struct Node*)malloc(sizeof(struct Node)); 

	new_node->data = new_data; 

	(*head_ref) = new_node;

 	if (*head_ref == NULL)   
    	{   
        	*head_ref = new_node;   
        	return;   
    	}   
    
    	while (last->next != NULL)   
        	last = last->next;   
    	
	last->next = new_node; 
	return;  
} 

void printList(struct Node* node) 
{ 
	while (node != NULL) { 
		printf("%d ", node->data); 
		node = node->next; 
	} 
} 

int main(void) 
{ 
	struct Node* head = NULL; 
	int e = 0;

	cout << "Enter the numbers and -1 to stop" << endl;
	while( e != -1){
		cin >> e;
		push(&head, e); 
	} 

	printf("\nGiven linked list \n"); 
	printList(head); 
	head = Reverse(head, 3); 

	printf("\nReversed Linked list \n"); 
	printList(head); 

	return 0; 
} 

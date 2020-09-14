#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node * Node;
int check_root(Node root);
Node insert(int item,Node root);
void inorder(Node root);
void preorder(Node root);
void postorder(Node root);
Node getnode(int item){
	Node p = (Node)malloc(sizeof(struct node));
	p->lchild = NULL;
	p->rchild = NULL;
	p->data = item;
	return p;
}
Node insert(int item,Node root){
	Node p = getnode(item);
	if(root == NULL)
		return p;
	if(item < root-> data)
		root->lchild = insert(item, root->lchild);
	else if(item >= root-> data)
		root->rchild = insert(item, root->rchild);
	return root;
}
int check_root(Node root){
	if(root != NULL)
		return 1;
	else{
		printf("Root is null");
		return 0;
	}
}
void inorder(Node root){
	if(root == NULL)
		return;
	inorder(root->lchild);
	printf("%d, " ,root->data);
	inorder(root->rchild);
}
void preorder(Node root){
	if(root == NULL)
		return;
	printf("%d, " ,root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}
void postorder(Node root){
	if(root == NULL)
		return;
	postorder(root->lchild);
	postorder(root->rchild);	
	printf("%d, " ,root->data);
}
int search(Node root, int item){
	while(root != NULL){
		if(item > root->data)
			root = root->rchild;
		else if(item < root->data)
			root = root->lchild;
		else 
			return 1;
	}
	return 0;
}
int main(){
	int ch=8, item, n;
	int j =0;
	Node root = NULL;
	printf("Enter the number of elements in the tree:");
	scanf("%d", &n);
	int arr[n];
	for(int i=1;i<=n;i++){
				printf("Enter the %d element:", i);
				scanf("%d", &arr[j]);
				j++;}
	
	while(ch != 0){
		printf("Enter:\n");
		printf("0:Exit\n1:Insert\n2:Insert all elements into the tree\n3:inorder\n4:preorder\n5:postorder\n6:to search");
		scanf("%d",&ch);
		switch(ch){
			case 0: return 1;
			case 1: printf("Enter item to insert:");
				scanf("%d", &item);
				root = insert(item, root);
				break;
			case 2: for(int i=0;i<n;i++){
				root = insert(arr[i],root);
				}
			case 3:if(check_root(root)==1);
				inorder(root);
				break;
			case 4: if(check_root(root)==1);
				preorder(root);
				break;
			case 5: if(check_root(root)==1);
				postorder(root);
				break;
			case 6: printf("Enter item to be searched:");
				scanf("%d", &item);
				if(search(root,item) == 1)
					printf("Item found\n");
				else
					printf("Item not found\n");
				break;
			default:printf("Invalid case\n");
				exit(0);
				break;
		}
		
	}
return 0;
}

			
		
			

	

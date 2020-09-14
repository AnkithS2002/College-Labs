//circular queue using arrays

#include<stdio.h>
#define S 5
void insert(int item,int *r,int *f,int q[]);
int delete(int q[],int *f,int *r);
void display(int q[],int r,int f);
//to insert elements
void insert(int item,int *r,int *f,int q[])
{
	if((*f==*r+1)||(*f==0 && *r==S-1))
	{
		printf("queue overflow\n");
		return;
	}
	if(*f==-1)
		*f=0;
	*r=(*r+1)%S;
	q[*r]=item;
}
//to delete elements
int delete(int q[],int *f,int *r)
{
	int item;
	if(*f==-1)
	{
		printf("queue underflow\n");
		return -99;
	}
	else
	{
		item=q[*f];
		if(*f>=*r)
		{
			*f=-1;
			*r=-1;
			
		}
			else
		*f=(*f+1)%S;
	return item;
	}
}
//to display elements
void display(int q[],int r,int f)
{
	int i;
	if(f==-1)
	{
		printf("queue is empty\n");
		return;
	}
	printf("contents of queue are :\n");
	for(i=f;i!=r;i=(i+1)%S)
		printf(" %d",q[i]);
	printf(" %d",q[i]);
	printf("\n");
}
int main()
{
	int fr,re,it,x,ch,n,nd,qu[S],i;
	fr=-1;
	re=-1;
	printf("\nEnter 1 to insert\n2 to delete\n3 to display\n-1 to exit \n");
	scanf("%d",&ch);
	while(ch!=-1)
	{
		switch(ch)
		{
			case 1://to insert elements
				printf("Enter the no.of elements to be inserted \n");
				scanf("%d",&n);
				printf("Enter the elements to be inserted\n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&it);
					insert(it,&re,&fr,qu);
				}
				break;
			case 2: //to delete elements
				printf("Enter the no.of elements to be deleted\n");
				scanf("%d",&nd);
				printf("The deleted elements are\n");
				for(i=0;i<nd;i++)
					printf("%d\n",delete(qu,&fr,&re));
				break;
			case 3: //to display elements
				display(qu,re,fr);
				break;
			default: printf("Invalid input\n");
		}
		printf("Enter next choice or -1 to exit\n");
		scanf("%d",&ch);
	}
	return 0;
}

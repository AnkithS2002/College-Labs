#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void push(char item,char s[100],int *t) ;
char pop(char s[100],int *t);
int is_operator(char sym);
int isoperator(char sym,char sym1);
int pre(char sym);
int main()
{
	char infix[20],postfix[20],stack[100];
	char item,item1,temp;
	int i=0,j=0;
	int top=-1;
	
	printf("enter infix expression= \n");
	gets(infix);
	while(infix[i]!='\0')
	{
		item=infix[i];
		item1=infix[i+1];
		if(item=='(')
		{
			push(item,stack,&top);
		}
		else if(item>='A'&&item<='Z'||item>='a'&&item<='z')
		{
			postfix[j]=item;
			j++;
		}
		else if(is_operator(item)==1)
		{
			  temp=pop(stack,&top);
			  	
			  while(top!=-1&&is_operator(temp)==1&&pre(temp)>=pre(item))
			  {
					
				postfix[j]=temp;
				j++;
			        temp=pop(stack,&top);
				//printf("\n %c", item);
			  }
			  push(temp,stack,&top);
			  push(item,stack,&top);
			


		}
		else if(isoperator(item,item1)==1)
		{
			  temp=pop(stack,&top);
			  	
			  while(top!=-1&&isoperator(temp)==1&&pre(temp)>=pre(item))
			  {
					
				postfix[j]=temp;
				j++;
				postfix[j]+='+';
				j++;
			        temp=pop(stack,&top);
				//printf("\n %c", item);
			  }
			  push(temp,stack,&top);
			  push(item,stack,&top);
			


		}
		else if(item==')')
		{
			temp=pop(stack,&top);
			while(temp!='(')
			{
			postfix[j]=temp;
			j++;
			temp=pop(stack,&top);
			
			}
	       }
	       else
	       {
		printf("invalid");
		exit(0);
	       }
	       i++;
	}
	printf("%d", j);
	while(top!=-1)
	{
		postfix[j]=pop(stack,&top);
		j++;
	}
	postfix[j-1]='\0';
	printf("postfix exp is=\n");

	puts(postfix);
	
	return 0;
}
void push(char item,char s[100],int *t)
{
	if(*t==99)
	{
		printf("stack overflow");
	}
	*t=*t+1;
	s[*t]=item;
}
int is_operator(char sym)
{
	if(sym=='^'||sym=='/'||sym=='+'||sym=='-'||sym=='*')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isoperator(char sym, char sym1)
{
	if((sym=='+'||sym=='-')&&(sym1=='+'||sym1=='-'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
char pop(char s[100],int *t)
{
	char item;
	if(*t==-1)
	{
	return -1;
	}
	else
	{
	item=s[*t];
	*t=*t-1;
	return (item);
	}

}
int pre(char sym)
{
	if(sym=='^')
	return 3;
	else if(sym=='*'||sym=='/')
	return 2;
	else if(sym=='+'||sym=='-')
	return 1;
	else
	return 0;
}

#include<stdio.h>

void push(char x,char s[],int *t);
char pop(char s[],int *t);
char tp(char s[],int *t);
int empty(char s[],int *t);
int main()
{   
    int i,k,n,top=-1;
    char stack[1000],exp[1000],y;
    scanf("%d\n",&n);
    for(k=0;k<n;k++)
    {
    scanf("%s",exp);
    
   for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        push(exp[i],stack,&top);
        else
        {
            if(exp[i]=='}' && tp(stack,&top)=='{')
            {
            y=pop(stack,&top);
            }
           
           else if(exp[i]==')' && tp(stack,&top)=='(')
            {
            y=pop(stack,&top);
            }
           
           else if(exp[i]==']' && tp(stack,&top)=='[')
            {
            y=pop(stack,&top);
            }
           
               
            else{
                 push(exp[i],stack,&top);
            }
            
            


        }
    }
    
    if(top==-1)
    printf("YES\n");
    else  
    printf("NO\n");
    top=-1;
    }
    return 0;

    
}
void push(char x,char s[],int *t)
{
    (*t)++;
    s[*t]=x;
}
char pop(char s[],int *t)
{
   int  y=s[*t];
    (*t)--;
    return y;
    
}
char tp(char s[],int *t)
{
    return s[*t];
}

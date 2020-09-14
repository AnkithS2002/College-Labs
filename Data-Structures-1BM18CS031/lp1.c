/******************************************************************************
Given a stack of integers, write a program that updates the input stack such that all occurrences of the
smallest values are at the bottom of the stack, while the order of the other elements remains the same. 
For example: Input stack (top-bottom) : 5 66 5 8 7 Output: 66 8 7 5 5

*******************************************************************************/

#include<stdio.h>

void push(int ele, int s[5], int *t){
    if(*t == 5 ){
        printf("Stack overflow");
        return;
    }
    s[++(*t)] = ele;
}
void pop(int s[5], int *t){
    if(*t == -1){
        printf("Stack underflow");
        return;
    }
    int item = s[(*t)--];
}
void display(int s[5], int t ){
    if(t == -1){
        printf("No elements in the Stack");
        return;
    }
    printf("The elements are:\n");
    for(int i=t;i!=-1;i--){
        printf("%d\n", s[i]);
    }
    
}

int main(){
    int t = -1;
    int s[5];
    int item = 0;
    int n = 0;
    int i = 0;
    int smallest = 0;
    int st[5];
    int count = 0;
    int t1 = -1;
    
    
    printf("How many elements do you want to input?\n");
    scanf("%d", &n);
    printf("Input the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &item);
        push(item , s, &t );
        
    }
    smallest = s[t];
    for(i=0;i<n;i++){
        if(s[i]<smallest){
            smallest = s[i];
            
        }
    }
    for(i=0;i<n;i++){
        if(s[i]==smallest){
            count++;
        }
    }
    
    for(i=0;i<count;i++){
        push(smallest, st, &t1);
    }
    
    for(i=n-1;i>=0;i--){
        if(s[i]!=smallest){
            push(s[i], st, &t1);
        }
    }
    
    display(st, t1);
}




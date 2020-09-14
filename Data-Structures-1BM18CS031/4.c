/*done using queues, wrong output too, correct it*/

/*A bracket is considered to be any one of the following characters: (, ), {, }, [, or ]. 
Two brackets are considered to be a matched pair if an opening bracket (i.e., (, [, or {) occurs to the left
of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of
brackets: [], {}, and (). A matching pair of brackets is not balanced if the set of brackets it encloses 
are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced.
The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses
encloses a single, unbalanced closing square bracket, ]. By this logic, we say a sequence of brackets is
balanced if the following conditions are met: It contains no unmatched brackets. The subset of brackets 
enclosed within the confines of a matched pair of brackets is also a matched pair of brackets. Given  a 
string of brackets, determine whether the sequence of brackets is balanced. If a string is balanced,
return YES. Otherwise, return NO. */

#include<stdlib.h>
#include<stdio.h>
#define S 5
void insert(char item,char q[10], int *r){
    if(*r == S-1){
        printf("Queue overflow");
        return;
    }
    switch(item){
        case '}' : item = '{';
                    break;
        case ']' : item = '[';
                    break;
        case ')' : item = '(';
                    break;
    
    }
    q[++(*r)] = item; 
}
void display(char q[10], int f, int r){
    int i;
    for(i=f;i<r;i++){
        printf("%c\n",q[i]);
    }
}

void main(){
    char q[10];
    char item;
    int r = -1, f = 0;
    int i, j, n, count=0;
    
    printf("Enter the total number of brackets (opening and closing counted as separate:\n");
    scanf("%d", &n);
    printf("Enter your brackets:\n");
    for(i=0;i<n;i++){
        scanf("%c", &item);
        insert(item, q, &r);
    }
    
    if(n%2 != 0){
        printf("NO");
        exit(0);
    }
    
    display(q, f, r);
    j=n-1;
    for(i=0;i<n;i++){
        if(q[i] != q[j]){
            printf("NO");
            count++;
            exit(0);
        }
        j--;
    }
    
    if(count == 0){
        printf("YES");
    
    }
}

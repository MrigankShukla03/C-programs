// Write a C program to Convert Infix Expression to postfix Expression
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 10
char stack[MAX];
int top=-1;

int precedence(char item){
    switch(item){
        case '(': return 0;
        case '#': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '^': return 3;
    }
}
void push(char item)
{
    ++top;
    stack[top]=item;
}
int pop()
{
    char item;
    item=stack[top];
    --top;
    return item;
}
int main(){
    char infix[20],postfix[20],item,temp;
    int i=0,j=0;
    printf("Enter the infix expression: ");
    scanf("%s",infix);
    push('#');
    for(i=0;i<strlen(infix);i++){
        temp=infix[i];
        if(isalnum(temp))
            postfix[j++]=temp;
        else if(temp=='(')
            push(temp);
        else if(temp==')'){
            while(stack[top]!='(')
                postfix[j++]=pop();
            temp=pop();
        }
        else{
            while(precedence(stack[top])>=precedence(temp))
                postfix[j++]=pop();
            push(temp);
        }
    }
    while(stack[top]!='#')
        postfix[j++]=pop();
    postfix[j++]='\0';
    printf("The postfix expression is: %s",postfix);
    
}

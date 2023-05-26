// Write a C Program to perform stack operations
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int a[MAX],top;
void push()
{
    int item;
    if(top==MAX-1)
        printf("Stack Overflow ");
    else
    {
        printf("Enter the element to be pushed: ");
        scanf("%d",&item);
        top++;
        a[top]=item;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack Underflow ");
    else
    {
        printf("The popped element is %d ",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("Stack is empty ");
    else
    {
        printf("The elements in the stack are: ");
        for(i=top;i>=0;i--)
            printf("%d ",a[i]);
    }
}
int main()
{
    int ch;
    top=-1;
    while(1)
    {
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid Choice!!");
        }
    }
    return 0;
}

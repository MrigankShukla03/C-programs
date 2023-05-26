// Write a C Program for Linked List//

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
// #include <conio.h>
#include <ctype.h>

void create();
void display();

struct NODE {
    int info;
    struct NODE *link;
};
typedef struct NODE node;

node *start = NULL;

int main()
{
    int choice;
    while (1) {
        printf("\n1. Create\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: exit(0);
            default: printf("Invalid choice");
        }
    }
}
void create()
{
    char ch;
    node *currptr,*newnode;
    currptr=(node *)malloc(sizeof(node));
    start=currptr;
    while(1){
        printf("Enter the element: ");
        scanf("%d",&currptr->info);
        printf("Would you like to add one more 'NODE' (y/n): ");
        ch = getche();
        if(ch=='y'||ch=='Y'){
            newnode=(node *)malloc(sizeof(node));
            currptr->link=newnode;
            currptr=newnode;
        }
        else{
            currptr->link=NULL;
            break;
        }
    }
}
void display()
{
    node *currptr=start;
    if(start==NULL)
        printf("List is empty");
    else{
        printf("List is ");
        while(currptr!=NULL){
            printf("%d ",currptr->info);
            printf(" -> ");
            currptr=currptr->link;
        }
        printf("NULL");
    }
}
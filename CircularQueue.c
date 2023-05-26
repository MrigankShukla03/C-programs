// Write a C program for Circular Queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int a[MAX];
int FRONT = -1;
int REAR = -1;

void insert(int e)
{
    if ((FRONT == 0 && REAR == MAX - 1) || (FRONT == REAR + 1))
        printf("Queue is full");
    else {
        if (FRONT == -1){
            FRONT = 0;
            REAR = 0;
        }
        else if (REAR == MAX - 1)
            REAR = 0;
        else
            REAR=REAR+1;
        a[REAR] = e;
    }
}

void deletion()
{
    if (FRONT == -1)
        printf("Queue is empty");
    else {
        printf("Deleted element is %d", a[FRONT]);
        if (FRONT == REAR){
            FRONT=-1; 
            REAR=-1;
        }  
        else if (FRONT == MAX - 1)
            FRONT = 0;
        else
            FRONT=FRONT+1;
    }
}

void display()
{
    if (FRONT == -1)
        printf("Queue is empty");
    else {
        if(FRONT<=REAR){
            printf("Queue is ");
            for (int i = FRONT; i <= REAR; i++)
                printf("%d ", a[i]);
        }
        else if(FRONT>REAR){
            printf("Queue is ");
            for (int i = FRONT; i <= MAX-1; i++)
                printf("%d ", a[i]);
            for (int i = 0; i <= REAR; i++)
                printf("%d ", a[i]);
        }
        }
    }

int main()
{
    int ch, ele;
    while (1) {
        printf("\n1. Insert \n2. Delete \n3. Display \n4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: printf("Enter the element to be inserted: ");
                    scanf("%d", &ele);
                    insert(ele);
                    break;
            case 2: deletion();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice");
        }
    }
}
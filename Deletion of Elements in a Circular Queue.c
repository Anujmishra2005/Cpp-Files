#include <stdio.h>

# define max 6
int queue[max];
int front=-1;
int rear=-1;

void Insert_element(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}


void delete_element()
{
    if((front==-1) && (rear==-1))
    {
        printf("\nQueue is underflow..");
    }
    else if(front==rear)
    {
        printf("\nThe Deleted element is %d", queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nThe Deleted element is %d", queue[front]);
        front=(front+1)%max;
    }
}



void display_element()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are :");
        while(i<=rear)
        {
            printf("%d,", queue[i]);
            i=(i+1)%max;
        }
    }
}

// Main Calling

int main()
{
    int choice=1,x;

    while(choice<4 && choice!=0)
    {
        printf("\n");
        printf("*********  Menu Driven Program for the  Insertion , Deletion , Display of an Element in a Circular Queue   *************");
        printf("\n");
        printf("\nChoose 1: 1) Insert an element");
        printf("\nChoose 2: 2) Delete an element");
        printf("\nChoose 3: 3) Display the element");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch(choice)
        {
            case 1:
                printf("Enter the element which is to be inserted :-- ");
                scanf("%d", &x);
                Insert_element(x);
                printf("\n");
                break;
            case 2:
                delete_element();
                printf("\n");
                break;
            case 3:
                display_element();
                printf("\n");
                break;
        }
    }
    return 0;
}

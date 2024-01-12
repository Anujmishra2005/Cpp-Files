#include<stdio.h>
# define Size 5

int deque_arr[Size];
int front = -1;
int rear = -1;

void Insert_rear()
{
    int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   printf("Queue Overflow\n");
        return;}
    if (front == -1)
    {   front = 0;
        rear = 0;}
    else
    if(rear == Size-1)
        rear = 0;
    else
        rear = rear+1;

    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[rear] = added_item ;
}

void Insert_front()
{   int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   printf("Queue Overflow \n");
        return;  }
    if (front == -1)
    {   front = 0;
        rear = 0;
    }
    else
        if(front== 0)
        front=Size-1;
    else
        front=front-1;
        printf("Input the element for adding in queue : ");
        scanf("%d", &added_item);
        deque_arr[front] = added_item ;
}

void display_queue()
{
    int front_pos = front,rear_pos = rear;

    if(front == -1)
    {   printf("Queue is empty\n");
        return;
    }
    printf("Elements in the Queue :\n");
    if( front_pos <= rear_pos )
    {
        while(front_pos <= rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= Size-1)
        {   printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

int main ()
{
    Insert_front();
    display_queue();
}

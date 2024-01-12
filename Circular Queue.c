#include<stdio.h>

void Insert_Circular_Queue(int Q[], int *Front, int *Rear, int Max, int Data)
{
    if ((*Front == 0 && *Rear == Max - 1) || (*Front == *Rear + 1))
    {
        printf("Overflow Condition\n");
        printf("Exit\n");
    }
    else if (*Rear == Max - 1)
    {
        *Front = 0;
        *Rear = 0;
    }
    else
    {
        *Rear = *Rear + 1;
        Q[*Rear] = Data;
    }
}

void Display_Circular_Queue(int Q[], int Front, int Rear , int Max)
{
    if (Front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements: ");

    if (Front <= Rear)
    {
        for (int i = Front; i <= Rear; i++)
            printf("%d ", Q[i]);
    }
    else
    {
        for (int i = Front; i < Max; i++)
            printf("%d ", Q[i]);

        for (int i = 0; i <= Rear; i++)
            printf("%d ", Q[i]);
    }

    printf("\n");
}

int main()
{
    int Max;
    printf("Enter the maximum size of the circular queue: ");
    scanf("%d", &Max);

    int Q[Max];
    int Front = -1;
    int Rear = -1;

    int num_elements;
    printf("Enter the number of elements to insert into the circular queue: ");
    scanf("%d", &num_elements);

    int data;
    for (int i = 0; i < num_elements; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        Insert_Circular_Queue(Q, &Front, &Rear, Max, data);
    }
    Display_Circular_Queue(Q, Front, Rear , Max);

    return 0;
}

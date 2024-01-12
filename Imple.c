#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Queue {
    struct Stack* stackEnqueue;
    struct Stack* stackDequeue;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->stackEnqueue = createStack();
    queue->stackDequeue = createStack();
    return queue;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        // Stack is empty
        return -1; // You may choose to return a special value or throw an exception
    }

    int data = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

void enqueue(struct Queue* queue, int data) {
    push(queue->stackEnqueue, data);
}

int dequeue(struct Queue* queue) {
    if (queue->stackDequeue->top == NULL) {
        // Transfer elements from stackEnqueue to stackDequeue
        while (queue->stackEnqueue->top != NULL) {
            push(queue->stackDequeue, pop(queue->stackEnqueue));
        }
    }

    return pop(queue->stackDequeue);
}

int isEmpty(struct Queue* queue) {
    return (queue->stackEnqueue->top == NULL && queue->stackDequeue->top == NULL);
}

int main() {
    struct Queue* myQueue = createQueue();
    int choice, value;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Check if Empty\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(myQueue, value);
                break;

            case 2:
                value = dequeue(myQueue);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;

            case 3:
                if (isEmpty(myQueue)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

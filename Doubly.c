// 1) Doubly Linked List
// 2) Polynomial Addition
// 3) BInary Search
// 4) Linear Search


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* start, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return start;
    }

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = start;
    if (start != NULL) {
        start->prev = newNode;
    }
    start = newNode;

    printf("Node with data %d inserted at the beginning\n", data);

    return start;
}

void displayList(struct Node* start) {
    struct Node* temp = start;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {

    struct Node* start = NULL;

    start = insertAtBeginning(start, 30);
    start = insertAtBeginning(start, 20);
    start = insertAtBeginning(start, 80);

    displayList(start);

    return 0;
}



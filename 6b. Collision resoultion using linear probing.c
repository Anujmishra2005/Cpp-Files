#include <stdio.h>

#define SIZE 10

int hash(int key) {
    return key % SIZE;
}

void insert(int table[], int key) {
    int index = hash(key);

    while (table[index] != -1) {
        index = (index + 1) % SIZE;
    }

    table[index] = key;
}

void display(int table[]) {
    printf("Hash Table: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");
}

int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    int n, key;

    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    printf("Enter the elements to insert:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(hashTable, key);
    }

    display(hashTable);

    return 0;
}

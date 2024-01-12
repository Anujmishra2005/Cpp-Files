#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};


void insertFirst (struct Node **head, int data)
{
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}

void display (struct Node *node)
{
  printf ("Linked List : \n");
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}

int size (struct Node *node)
{
  int counter=0;
  while (node != NULL)
    {
      node = node->next;
      counter++;
    }
 return counter;

}
int checkPalindrome (struct Node *head, int counter)

{
    int i = 0, j;
    struct Node *front, *rear;
     while (i != counter / 2)
    {
        front = rear = head;
        for (j = 0; j < i; j++)
        {
            front = front->next;
        }
        for (j = 0; j < counter - (i + 1); j++)
        {
            rear = rear->next;
        }
        if (front->data != rear->data)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }

    return 1;
}

int main ()
{
  struct Node *head = NULL;
  int counter,result;
  insertFirst (&head, 2);
  insertFirst (&head, 3);
  insertFirst (&head, 4);
  insertFirst (&head, 3);
  insertFirst (&head, 2);



  display (head);
  counter = size(head);
      result = checkPalindrome (head, counter);

    if (result == 1)
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("The linked list is not a palindrome.\n");
    }
  return 0;
}

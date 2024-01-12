#include<stdio.h>
#include<conio.h>


struct node {
    int info;
    struct node *link;
};
struct node *first;

void insert_at_end()
{
    struct node *ptr ,*cpt;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
        printf("Linked List is Underflow");
    else
    {
        printf("Enter the Info of New Node");
        scanf("%d",&ptr -> info);
        cpt = first;
        while (cpt ->link!= NULL)
        {
            cpt = cpt -> link;
            cpt-> link = ptr;
            ptr = NULL;
        }
    }
}

int main ()
{
    insert_at_end();
}

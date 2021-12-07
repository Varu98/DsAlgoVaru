#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// we take struct node * as the data type instead of regular function keyword
// because we want the return type to be a head of the same data type we created...
struct Node *insertNodeAtBeginning(struct Node *head)
{
    int choice2;

    printf("\nDo you wish to insert a Node at the beginning ?\n\nIf yes press 1\nElse press 0\n");
    scanf("%d", &choice2);
    if (choice2)
    {
        struct Node *newTemp;
        newTemp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data to insert at the beginning\n");
        scanf("%d", &newTemp->data);
        newTemp->next = head;
        return newTemp;
    }
}

//created a function for traversal to avoid repetition of code
void traversal(struct Node *temp, struct Node *head)
{
    printf("____________\n\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

//Driver Code
int main()
{
    struct Node *head = 0, *temp, *newNode;
    int choice;

    while (choice)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data\n");
        scanf("%d", &newNode->data);
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("To Continue Press 1\nTo Abort Press 0\n");
        scanf("%d", &choice);
    }

    traversal(temp, head);
    head = insertNodeAtBeginning(head);
    traversal(temp, head);
    return 0;
}
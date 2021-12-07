#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = 0, *newNode, *temp;
    int choice;

    while (choice)
    {

        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter Data\n");
        scanf("\n%d", &newNode->data);

        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue (0,1)");
        scanf("\n%d", &choice);
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//Creating A Node Structure using int to store data and a pointer variable to store the address of the next node
struct Node
{
    int data;
    struct Node *next;
};

void inputUserData(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Enter element of data: ");
        scanf("%d\n", &ptr->data);
        ptr = ptr->next;
    }
}

void listTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("data: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    //Creating more nodes with pointers
    struct Node *head = NULL;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocating Dynammic Memory Using Malloc
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    inputUserData(head);
    listTraversal(head);
}
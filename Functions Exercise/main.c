// LinkedList implementation of Stack
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

Node *createNewNode(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void push(int x)
{
    Node *newNode = createNewNode(x);
    newNode->next = head;
    head = newNode;
}

void pop()
{
    if (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
void displayStack()
{
    printf("Displaying the elements of the stack from top to bottom");
    Node *current = head;
    while (current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
}
int main()
{
}
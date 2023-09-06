#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *next;
};
// This is for creating the Node 
struct Node *creatNode()
{
    struct Node *nodeToInsert;
    int d;
    nodeToInsert = (struct Node *)malloc(sizeof(struct Node));
    printf("enter the data which you want to inser");
    scanf("%d", &d);
    nodeToInsert->data = d;
    nodeToInsert->next = NULL;
    return nodeToInsert;
}
void insertAtTail(struct Node **head, struct Node **tail)
{
    // creating the first node
    struct Node *nodeToInsert;
    if ((*head) == NULL)
    {
        (*head) = (*tail) = creatNode();
    }
    else
    {
        (*tail)->next = creatNode();
        (*tail) = (*tail)->next;
    }
}
// To insert at head node
void insertAtHead(struct Node **head)
{
    struct Node*nodeToInsert;
    nodeToInsert=creatNode();
    nodeToInsert->next=(*head);
    (*head)=nodeToInsert;

}
// To Traverse the list
void traversal(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    insertAtTail(&head,&tail);
    insertAtTail(&head,&tail);
    insertAtTail(&head,&tail);
    insertAtTail(&head,&tail);
    insertAtTail(&head,&tail);
    traversal(head);
     return 0;
}
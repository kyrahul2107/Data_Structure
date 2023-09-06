#include <iostream>
using namespace std;
class node

{
public:
    int data;
    node *next;
    node *previous;

    // constructre creation
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }
     // destructor for deletion
    ~node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for the node with the data value" << value << " " << endl;
    }
};
// printing the data of the linklist
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// To count the length of the linklist
int count(node *&head)
{
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// Insert at head position
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->previous = temp;
    head = temp;
}
// insert at tail position
void insertAtTail(node *&head, node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->previous = tail->next;
    tail = temp;
}
// Insert at any position 
void InsertAtPositon( node * & head ,node * & tail,int data,int position)
{
    node *nodeToInsert= new node(data);
    node *temp1;
    node *temp2=NULL;
    temp1=head;
    int cnt =1;
    while(cnt < position)
    {
        temp2=temp1;
        temp1=temp1->next;
        cnt++;

    }
    temp2->next=nodeToInsert;
    nodeToInsert->previous=temp2;
    nodeToInsert->next=temp1->previous;
    temp1->previous=nodeToInsert;

}
// delete at any position
void deleteAtAnyPositon( int position , node * & head)
{   
    node * current=head;
    node *previousPointer=NULL;
    // to delete the head node 
    if(position==1)
    {
        node *temp=head;
        temp->next=NULL;
        temp->next->previous=NULL;
        head=temp->next;
        delete temp;
    }
    // to delete at any given position
    else
    {
       int cnt = 1;
        while (cnt < position)

        {
            previousPointer = current;
            current = current->next;
            cnt++;
        }
        current->previous=NULL;
        previousPointer->next=current->next;
        current->next=NULL;
        delete current;


    }
}
int main()
{
    // creation of a node
    node *node1 = new node(10);
    node *head = node1;
    node *tail=head;
    print(head);
    cout << endl;
    /* insertAtHead(head,12);
     print(head);
     cout<<endl;*/
    insertAtTail(head, tail, 12);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 14);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 16);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 18);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 20);
    print(head);
    cout << endl;
    InsertAtPositon(head,tail,77,3);
    print(head);
    cout<<endl;
    deleteAtAnyPositon(3,head);
    print(head);
    cout<<endl;
    cout << "The length of the linklist is::" << count(head) << endl;
    return 0;
}
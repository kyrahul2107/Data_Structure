#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor creation
    node(int data)
    {
        this->data = data;
        this->next = NULL;
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
void insertAthead(node *&head, int d)
{
    // new node creation
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
//
void insertationAttail(node *&head, node *&tail, int data)
{
    // creation of new node
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
    // To create the loop in the list
    tail->next = head->next;
}
void insertAtcurrent(int position, int d, node *&head, node *&tail)
{ // insertion at head node
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }
    // creation of new node
    node *nodeToInsert = new node(d);
    node *temp;
    temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insertin at tail position
    if (temp->next = NULL)
    {
        insertationAttail(head, tail, d);
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteAtCurrrent(int position, node *&head, node *&tail)
{
    node *temp1, *current, *previous;
    current = head;
    temp1 = head;
    // deletion of first node
    if (position == 1)

    {
        head = head->next;
        temp1->next = NULL;
        delete temp1;
    }
    // deletion at current position and the last node
    else
    {
        int cnt = 1;
        while (cnt < position)

        {
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
// Reverse the linklist
node *reverse(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *forward = NULL;
    while (current != NULL)
    {
        forward = current->next;
        // Revesing the pointer
        current->next = previous;
        previous = current;
        current = forward;
    }
    head = previous;
    return head;
}
// Recursive apporacah to reverser the Linklist
/*node * reverseRecursively(node *&head, node*current, node *previous)
{
    previous = NULL;
    current = head;
  node* forward = NULL;

    // Base case
    if (current == NULL)
    {
        head = previous;
        return head;
    }

    forward = current->next;
    reverseRecursively(head, forward, current);
    current->next = previous;

}*/

// To detect the loop in the list
bool detectLoop(node *&head)
{
    // if the list is empty
    if (head == NULL)
    {
        return false;
    }

    // Creating a map to mark true or false
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        // cycle present
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}
// to detect the loop using floyed cycyle detection
bool floyedDetection(node *&head)
{
    // if the node is totally empty
    if (head == NULL)
    {
        return false;
    }

    // Creating the runner pointers
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
// to find the intersection point of the loop
node *intersectioPointofLoop(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return fast;
        }
    }
    return NULL;
}
// To find the starting node of the loop
node *getStartingNode(node *&head)
{
    node *intersection = intersectioPointofLoop(head);
    node *slow = head;
    while (slow != intersection)
    {
        intersection = intersection->next;
        slow = slow->next;
    }
    return slow;
}
// Function to remove the loop
void removeLoop(node *&head)
{
    // when list is empty
    if(head==NULL)
    {
        return;
    }
    node *startofLoop=getStartingNode(head);
    node *temp=startofLoop;
    while(temp->next!=startofLoop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    }

int main()
{
    // creation of new node
    node *head, *tail;
    node *node1 = new node(10);
    head = tail = node1;
    insertationAttail(head, tail, 12);
    // print(head);
    cout << endl;
    insertationAttail(head, tail, 14);
    //  print(head);
    cout << endl;
    insertationAttail(head, tail, 16);
    //   print(head);
    cout << endl;
    insertationAttail(head, tail, 18);
    // print(head);
    cout << endl;
    insertationAttail(head, tail, 20);
    //  print(head);
    cout << endl;
    // insertAtcurrent(4,77,head,tail);
    // print(head);
    // cout << endl;
    // deleteAtCurrrent(6, head, tail);
    // print(head);
    // cout << endl;
    // cout << "value at the tail pointer is " << tail->data << " " << endl;
    // cout << "after the reversing the list" << endl;
    // node *reversePointer = reverse(head);
    // print(reversePointer);
    cout << "checking the loop using the iteration" << endl;
    if (detectLoop(head))
    {
        cout << "loop exist" << endl;
    }
    else
    {
        cout << "loop is not present" << endl;
    }
    cout << "checking the loop using the floyedDetection" << endl;
    if (floyedDetection(head))
    {
        cout << "loop exist" << endl;
    }
    else
    {
        cout << "loop is not present" << endl;
    }
    cout << "Loop present at the data" <<" "<< getStartingNode(head)->data << endl;
     cout<<"after calling removingLoop  function"<<endl;
     removeLoop(head);
     if (floyedDetection(head))
    {
        cout << "loop exist" << endl;
    }
    else
    {
        cout << "loop is not present" << endl;
    }
    cout<<"after removing the loop the list Look like"<<endl;
    print(head);

    return 0;
}
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructure calling
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insertion in the curcular list
void insertionInList(node *&tail, int data)
{
    // when the list is totally empty
    if (tail == NULL)
    {
        tail = new node(data);
        tail->next = tail;
    }
    // when the list is not empty
    else
    {   node *current=tail;
        node *temp=new node(data);
        tail->next=temp;
        temp->next=current;
        tail=temp;
    }
}
// traverasal of the link list
void print(node *&tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data
             << " ";
        tail = tail->next;
    } while (tail->next != temp);
}
int main()
{
    node *tail = NULL;
    insertionInList(tail,10);
    print(tail);
    cout<<endl;
    insertionInList(tail,12);
    print(tail);
    cout<<endl;
    insertionInList(tail,14);
    print(tail);
    cout<<endl;
    insertionInList(tail,16);
    print(tail);
    cout<<endl;
    insertionInList(tail,18);
    print(tail);
    cout<<endl;
    return 0;
}

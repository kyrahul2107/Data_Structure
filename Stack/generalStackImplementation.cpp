#include <iostream>
using namespace std;
// Implementatin of the stack using the array data structure
class Stack
{
    public:
    // properties
    int top;
    int *arr;
    int size;

    // Behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // Implementation of the push function
    void push(int elment)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = elment;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    // Implementation of the pop function
    void pop()
    {
        if (top > 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    // To implement the peek function
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }
    // To get the size of the stack
    bool empty()
    {
        if (top == -1)

        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    // creation of  stack
    Stack s(5);
    // pushig the element in the stack
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    // to get the elment at the top of the stack
    cout<<"the element at the top of the stack is "<<" "<<s.peek()<<endl;
    // To pop out the element of the stack
    s.pop();
    cout<<"the element at the top of the stack is "<<" "<<s.peek()<<endl;
    // To know whether the stack is empty or not
   if(s.empty())
   {
     cout<<"the stack is not empty"<<endl;
   }
   else{
    cout<<"Stack is totally empty";
   }

    return 0;

}
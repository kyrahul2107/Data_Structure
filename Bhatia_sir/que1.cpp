#include <iostream>
using namespace std;
// Implementatin of the stack using the array data structure
struct Stack
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
        if (top > 2)
        {
            cout << arr[top--] << endl;
            cout << arr[top--] << endl;
            cout << arr[top--] << endl;
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
    // Que 1: push operation using new keyword;
    Stack *s = new Stack(5);
    s->push(10);
    s->push(12);
    s->push(14);
    s->push(16);
    s->push(18);
    // Que 2: to pop the consecutive 3 element of the stack
    s->pop();

    return 0;
}
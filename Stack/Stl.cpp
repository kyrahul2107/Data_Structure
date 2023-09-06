#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Initilization of stack
    stack<int> s;
    // pusing the element in the stack
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    // to print the element of top of stack
    // cout<<"the element at the top of the stack is"<<" "<<s.top()<<endl;
    // to pop out the element at he top of the stack
    // s.pop();
    //   cout<<"After poping the elemet at the top of the stack is"<<" "<<s.top()<<endl;
    // To know that wheter the stack is empty or not
  /*  if (s.empty())
    {
        cout << "Stack is totally empty" << endl;
    }
    else
    {
        cout << "stack is not empty " << endl;
    }*/
    
    // To get the size of the stack
    cout<<"the size of the stack is "<<" "<<s.size()<<endl;
    return 0;
}
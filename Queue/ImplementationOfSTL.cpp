#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // creation of queue 
    queue<int>q;
    //pusing the element in the queue
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);
    q.push(18);
    cout<<"The size of the queue is"<<q.size()<<endl;
    // Poping out the element from the queue
    q.pop();
     cout<<"The size of the queue is"<<q.size()<<endl;
     //To check The  Whether the queue is empty
     if(q.empty())
     {
        cout<<"the Queue is empty"<<endl;
     }
     else{
        cout<<"Queue is not empty"<<endl;
     }
     //to ge the Front element
     cout<<"the fornt element of the queue is"<<q.front()<<endl;
     
return 0;
}
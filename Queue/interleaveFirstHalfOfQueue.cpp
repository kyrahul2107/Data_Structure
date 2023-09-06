#include<iostream>
#include<queue>
#include<stack>

using namespace std;
 queue<int>q;
    stack<int>s;
void interleave(int *arr,int size)
{
    
    // Step 1:
    // push the element of the array in to the queu
    for(int i=0;i<size;i++)
    {
        q.push(arr[i]);
    }
    // step 2:
    // pushing the half of the element of the queue in to the new queue
    queue<int>newq;
    for(int i=0;i<size/2;i++)
    {
        int value=q.front();
        q.pop();
        newq.push(value);

    }
    // Step 3:
    //rearrage the element in the q 
    while(!newq.empty())
    {
        int value=newq.front();
        newq.pop();
        q.push(value);
        int value2=q.front();
        q.pop();
        q.push(value2);
    }
    // printint the queue after the rearrangement 
    for(int i=0;i<size;i++)
    {
        int value=q.front();
        q.pop();
        cout<<value<<" ";
        
         q.push(value);
    }

}
// same function usin stack
void interleaveUsingStack(int *arr, int size)
{
     // pusing the element into the stack
     queue<int>q;
    for(int i=0;i<size;i++)
    {
        q.push(arr[i]);
    }
    // pushing the half of the element into the stac
    for(int i=0;i<size/2;i++)
    {
        int value=q.front();
        q.pop();
        
     s.push(value);
    }
     
    // pop all the element of the stack and push into the queue
    while(!s.empty())
    {
        int value=s.top();
        s.pop();
        q.push(value);
    }
    //rearraging the half of the element of the queue
    for(int i=0;i<size/2;i++)
    {
        int value=q.front();
        q.pop();
        q.push(value);
    }
    // pusing again element of the queue into the stack
for(int i=0;i<size/2;i++)
    {
        int value=q.front();
        q.pop();
        s.push(value);
        
    }   
    // while loop
    while(!s.empty())
    {
        int value=s.top();
        s.pop();
        q.push(value);
        int value2=q.front();
        q.pop();
        q.push(value2);
    }
    // printint the queue after the rearrangement 
    for(int i=0;i<size;i++)
    {
        int value=q.front();
        q.pop();
        cout<<value<<" ";
        
         q.push(value);
    }

    
    
}
int main()
{
    int arr[]={ 11,12,13,14,15,16,17,18,19,20};
    // calling the interleaving function
    interleave(arr,10);
    cout<<endl;
    interleaveUsingStack(arr,10);
    return 0;
}
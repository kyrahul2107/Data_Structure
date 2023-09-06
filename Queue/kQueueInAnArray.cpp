#include <iostream>
using namespace std;
class kQueue
{
public:
    int data;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpot;
    // constructor creation
    public:
    kQueue(int size, int k)
    {
        arr = new int[size];
        front = new int[k];
        rear = new int[k];
        next = new int[size];
        freeSpot = 0;
        // putting -1 in the front arry and rear array
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        // storing the next index in the next array
        for (int i = 0; i < size - 1; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
    }
        // insertation operation
        void enqueue(int data, int qn)
        {
            // overflow condition
            if (freeSpot == -1)
            {
                cout << "queue overflow" << endl;
            }
            // finding the index to insert the data

            int index = freeSpot;
            // update the freespot
            freeSpot = next[index];
            // first element to push
            if (front[qn - 1] == -1)
            {
                front[qn] = index;
            }
            else
            {
                next[rear[qn]] = index;
                // update the next;
            }
            next[index] = -1;
            // point rear to the next
            rear[qn] = index;
            arr[index] = data;
            cout<<"insertion occur at index"<<" " <<index<<"and qn"<<" "<<qn<<" "<<"data item"<<" "<<data<<" "<<endl;
        }
        // pop operation
        // qn represent the the n the queue
        int pop(int qn)
        {
             // to check the empty condititon 
             /*if()
             {
                cout<<"queue underflow";
                return -1;
             }*/
             // Find the index
             int index=front[qn];
             front[qn]=next[index];
             // managing the freespot
             next[index]=freeSpot;
             freeSpot=index;
             return arr[index];
        }
    
};    



int main()
{
 // creation of object
  kQueue k (10,3);
  // pushing element in the queue
  k.enqueue(1,1);
  k.enqueue(2,1);
  k.enqueue(3,2);
  k.enqueue(4,2);
  k.enqueue(5,3);
  k.enqueue(6,3);

  return 0;
   

}
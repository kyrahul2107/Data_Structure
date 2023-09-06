#include <iostream>
#include <conio.h>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;

    // constructor creation
    Heap()
    {
        size = 0;
        arr[0] = -1;
    }

    // insertation funtion
    void insert(int v)
    {
        size = size + 1;
        int index = size;
        arr[index] = v;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        
        }
    }
    void del()

    {
        //step1::last element ko first me dalo
        arr[1]=arr[size];
        // step2: decrease the size
        size--;
        int i=1;
        // step3::to mange the heap
         while(i<size)
         {
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<size&& arr[i]<arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex <size&& arr[i]<arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return ;
            }

         }
         
        }
        
 // Heapify method
  void heapify(int *arr, int s, int i)
  {
    int largest=i;
    int left= 2*i;
    int right =2*i+1;
    if(left<=s&&arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=s&& arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,s, largest);
    }
  }
// deletion from heap
 void delFromHeap(int *arr,int &size)

 {
     swap(arr[1],arr[size--]);
     heapify(arr,size,1);
 }

};

int main()
{
    Heap h;
  /*  h.insert(34);
    h.insert(23);
    h.insert(56);
    h.insert(42);
    h.insert(78);
    h.insert(9);
    cout << "Printing the data of the heap" << endl;
    h.print();
    h.del();
    cout<<"Printing the data after deletion"<<endl;
      h.print();*/
      int arr[]={-1,10,20,12,22,15,30};
      int n=6;
      for(int i=n/2;i>=1;i--)
      {
       h.heapify(arr,n,i);
      }
      cout<<"After applying heapify method "<<endl;
      for(int i=1;i<=n;i++)
      {
        cout<<arr[i]<<" ";
      }
     /* h.delFromHeap(arr,n);
      h.delFromHeap(arr,n);
      cout<<"After deletion the heap is look like"<<endl;
      for(int i=1;i<=n;i++)
      {
        cout<<arr[i]<<" ";
      }*/
      // applying heap sort
      cout<<"After applying the heap sort"<<endl;
      h.heapSort(arr,n);
       for(int i=1;i<=n;i++)
      {
        cout<<arr[i]<<" ";
      }
    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
int selection_sort(int arr[100],int size)
{    
    int i,minindex,j,temp;
    for(i=0;i<size-1;i++){
        minindex=i;
        for( j=i+1;j<size;j++)
        {
           if(arr[j]<arr[minindex]){
            minindex=j;
           }
        } 
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;

    }
    //after selection sort the elements are
    cout<<"After sorting elements are";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
  int main()
  {
    int arr[100],size;
    cout<<"enter the size of array::";
    cin>>size;
    cout<<"enter the element of array::";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    // calling selection sorting function
    selection_sort(arr,size);
    return 0;

  }
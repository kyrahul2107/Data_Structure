#include<iostream>
#include<conio.h>
using namespace std;
int bubble_sort(int a[100], int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    //after sorting the elements are
    cout<<"after sorting the elements are";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
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
    bubble_sort(arr,size);
    return 0;

  }
#include<iostream>
using namespace std;

 void Merg(int *arr,int s,int e)
 {
    int mid =(s+e)/2;
    int len1=mid+1-s;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    // copy values
    int MainArrayIndex=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[MainArrayIndex++];
    }
    MainArrayIndex =mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[MainArrayIndex++];
    }
    // merg two sorted array
 int index1 = 0;
    int index2 = 0;
    MainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
           arr[MainArrayIndex++] = first[index1++];
        }
        else{
            arr[MainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[MainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[MainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

 }

void MergSort( int *arr,int s, int e)
{
    // base case
    if(s>=e)
    {
      return ;

    }
    int mid=(s+e)/2;
    // left part sory karo
    MergSort(arr,s,mid);
    // right part sort karo
    MergSort(arr,mid+1,e);
    // calling the merg function
    Merg(arr,s,e);
}

int main(void)
{
    int arr[]={ 38,27,43,3,9,2,10,4};
    int n=8;
    int s=0;
    MergSort(arr,s,n);
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
     cout << endl;
     return 0;
}
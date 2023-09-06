#include<iostream>
#include<conio.h>
using namespace std;
int pivot( int arr[],int size)
{
   int start=0,end=size-1,mid=start+(end-start)/2;
   while(start<=end)
   {
   if(arr[mid]>=arr[0])
   {
    start=mid+1;
   }
   else{
    end=mid;
     }
     mid=start+(end-start)/2;
   }
   return start;
}
int main()
{
    int arr[8]={ 7,8,9,1,2,3,4,5};
    cout<<"pivot is"<<pivot(arr,8)<<endl;
    
    return 0;
}
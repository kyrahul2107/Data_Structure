#include<iostream>
using namespace std;
int mountain( int a[10],int size)
{
   int s=0;
   int e=size-1;
   int mid=s+(e-s)/2;
   while (s<e)
   {
    if(a[mid]<a[mid+1])
    {
      s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
   }
   return s;
}
int main(void)
{
    int a[10]={ 1,2,3,4,8,9,8,7,6};
    int result;

     result=mountain( a,9);
     cout<<result;
}
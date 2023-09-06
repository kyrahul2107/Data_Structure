#include<iostream>
#include<conio.h>
using namespace std;
int unique(int a[],int size)
{  
    int ans=0;
   for(int i=0;i<size-2;i++)
   {
     ans= ans^a[i]^a[i+1];

   }
   return ans;
}
  int main()
  {
    int a[10],n,c;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
      c =unique(a,n);
      cout<<c;
  }
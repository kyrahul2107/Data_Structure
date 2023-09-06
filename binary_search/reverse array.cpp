#include<iostream>
using namespace std;
void reverse (int a[],int n){
    int start=0,end=n-1;
    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
  int main()
{
  int a[10],n;
  cout<<"enter the size of array";
  cin>>n;
  cout<<"enter the elemnet of array";
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  reverse(a,n);
  
}  